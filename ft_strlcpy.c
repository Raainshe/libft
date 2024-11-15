/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:43:14 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:20:50 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_count(char *src)
{
	size_t	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size > 0)
	{
		while ((src[i] != 0) && (dst_size - 1 > i))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (str_count((char *)src));
}
