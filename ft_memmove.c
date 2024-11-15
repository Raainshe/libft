/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:00:15 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:29:01 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_memory(char *dest2, const char *src2, size_t len, int direction)
{
	size_t	i;

	if (direction == 1)
	{
		i = 0;
		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			dest2[i - 1] = src2[i - 1];
			i--;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*dest2;
	const char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = (char *)dest;
	src2 = (const char *)src;
	if (dest2 < src2)
	{
		copy_memory(dest2, src2, len, 1);
	}
	else
	{
		copy_memory(dest2, src2, len, 0);
	}
	return (dest);
}
