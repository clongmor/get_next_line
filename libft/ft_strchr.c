/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:11:04 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/19 13:38:15 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes in a pointer to string and an int. searches
** through the string for the int and returns a pointer
** to the index of the string where it first finds the
** character.
** Uses: ft_strlen, ft_memchr
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	char	*character;

	len = ft_strlen(s) + 1;
	character = ft_memchr(s, c, len);
	return (character);
}
