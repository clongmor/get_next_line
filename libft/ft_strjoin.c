/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:19:39 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/21 09:23:20 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes in two pointers to strings, and allocates memory
** for the size of the two added together + \0. copies s1
** into the memory and then copies s2 in starting at the
** end of s1 using memcpy. returns the new string created.
** Uses: ft_memcpy, ft_strlen && malloc
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join_str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (join_str == NULL)
		return (NULL);
	ft_memcpy(join_str, s1, ft_strlen(s1));
	ft_memcpy((join_str + ft_strlen(s1)), s2, ft_strlen(s2));
	join_str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (join_str);
}
