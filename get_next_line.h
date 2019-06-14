/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:32:37 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/14 10:28:33 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#  define BUFF_SIZE 32
#include <stdlib.h>
#include "./libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif
