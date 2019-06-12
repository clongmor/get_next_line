/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:42:27 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/12 16:46:46 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*readfile(int fd)
{
	char		*buff;
	static ssize_t		read_no;

	if (!(buff = ft_strnew(BUFF_SIZE)));
		return (NULL);
	buff = ft_memset((void *)buff,'\0', (size_t)BUFF_SIZE - 1);
	read_no = read(fd, (void *)buff, ((size_t)BUFF_SIZE - 1));
	if (read_no <= 0)
		return (NULL);
	return (buff);
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
