/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:56:36 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:22:28 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Is used to fill a block of memory with a particular value.
void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*str2;

	i = 0;
	str2 = (unsigned char *)str;
	while (i < len)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return (str2);
}
