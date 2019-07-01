/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clongmor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:53:39 by clongmor          #+#    #+#             */
/*   Updated: 2019/06/19 16:53:42 by clongmor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes in a double pointer and uses memdel to
** to free the memory and to set the pointer =
** NULL. returns nothing.
** Uses: ft_memdel
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	void	**ptr;

	if (as == NULL)
		return ;
	ptr = (void **)as;
	ft_memdel(ptr);
}
