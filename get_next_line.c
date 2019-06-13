/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:42:27 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/13 17:57:31 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*readfile(int fd)
{
	char		*str[255];
	char		*buff;
	int			read_no;
	char		*newline;
	char		*tmp;

	if (!(buff = ft_memset((void *)buff,'\0', (size_t)BUFF_SIZE + 1)))
		return (NULL);
	while (read_no = read(fd, (void *)buff, ((size_t)BUFF_SIZE)) > 0)
	{
		buff[BUFF_SIZE] = '\0';
		if ((newline = ft_strchr(buff, '\n')) != NULL)
			break ;
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		tmp  = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
	}
	if (read_no <= 0)
		return (-1);
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
int		readline(int fd)
{

}
