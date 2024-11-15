/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:15:55 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:15:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Is used to search for the first occurrence of a
//specific byte character within a block of memory.
void	*ft_memchr(const void *ptr, int c, size_t num)
{
	unsigned char	value;
	unsigned char	*ptr2;
	size_t			i;

	value = (unsigned char)c;
	ptr2 = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		if (ptr2[i] == value)
			return ((void *)&ptr2[i]);
		i++;
	}
	return (NULL);
}
