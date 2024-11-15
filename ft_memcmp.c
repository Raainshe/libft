/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:40:58 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:14:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//is used to compare two blocks of memory.
//It checks whether the two memory blocks are identical or different, if diff
//It indicates which block is lexicographically greater.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_2;
	unsigned char	*s2_2;

	s1_2 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (s1_2[i] == s2_2[i]))
		i++;
	if (i == n)
		return (0);
	else
		return (s1_2[i] - s2_2[i]);
}
