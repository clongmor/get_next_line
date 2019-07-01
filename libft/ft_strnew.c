/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:29:24 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/19 16:54:11 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes in a size, allocates a memory of that size,
** plus 1 for the \0. then sets each byte to \0.
** returns the memory block allocated.
** Uses: ft_memalloc.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem_area;

	mem_area = (char *)ft_memalloc(size + 1);
	if (mem_area == NULL)
		return (NULL);
	ft_memset(mem_area, '\0', size);
	return (mem_area);
}
