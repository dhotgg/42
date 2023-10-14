/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdhot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:59:05 by gdhot             #+#    #+#             */
/*   Updated: 2023/09/26 00:55:44 by gdhot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest != src && n)
	{
		while (i < n)
		{
			((unsigned char *)[i] = ((unsigned char *)src)[i]);
			++i;
		}
	}
	return (dest);
}
