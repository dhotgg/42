/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdhot <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:03:49 by gdhot             #+#    #+#             */
/*   Updated: 2023/09/21 17:22:23 by gdhot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len-- >= i)
	{
		if (*big == *little && !ft_memcmp(big, little, i))
			return ((char *)big);
		++big;
	}
	return (NULL);
}
