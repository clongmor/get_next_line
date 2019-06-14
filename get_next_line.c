/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:42:27 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/14 10:28:31 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		store_line(int fd, char *str, char**line)
{
	int		len;
	int		i;
	char	*tmp;

	i = 0;
	len = 0;
	while (str[len] != '\n' && str[len] != '\0')
		len++;
	if (str[len] == '\n')
	{
		while (i < len)
		{
			*line[i] = str[i];
			i++;
		}
		tmp = strdup(str[len + 1]);
		free(str);
		str = tmp;
	}
	else if (str[len] == '\0')
	{
		while (i < len)
		{
			*line[i] = str[i];
			i++;
		}
	}
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[255];
	char			*buff;
	int				read_no;
	char			*newline;
	char			*tmp;
	int				i;
	int				bytes_read;

	i = 0;
	if (!(buff = ft_strnew((size_t)BUFF_SIZE + 1)))
		return (-1);
	while ((read_no = read(fd, (void *)buff, BUFF_SIZE)) > 0)
	{
		buff[BUFF_SIZE] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		tmp  = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
		free(tmp);
		if (ft_strchr(buff, '\n') != NULL)
			break ;
	}
	if (read_no < 0)
		rteurn (-1);
	else if (read_no == 0)
		return (0);
	else if (read_no > 0)
		return (store_line());
	
}

/*void	readline(int fd, size_t linewidth)
{
	size_t		i;
	char		*buff;

	i = 0;
	if (!(buff = readfile(fd)))
		return ;
	while (buff[i])
	{
		if (buff[i] == '\n')
			ft_printline(i);
	}
}*/
