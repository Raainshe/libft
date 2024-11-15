/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:59:34 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:21:15 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t dest_size)
{
	size_t	i;
	size_t	s_len;
	size_t	d_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (dest_size <= d_len)
		return (dest_size + s_len);
	i = 0;
	while (src[i] && i < dest_size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	if (i < dest_size - d_len - 1)
		dest[d_len + i] = '\0';
	else if (dest_size > 0)
		dest[dest_size - 1] = '\0';
	return (d_len + s_len);
}
