/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:24:47 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:35:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//is used to copy a block of memory from one location to another.
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest2;
	const char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = (char *)dest;
	src2 = (const char *)src;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
