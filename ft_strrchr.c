/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:21:00 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:23:54 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Is used to find the last occurrence of a specified character in a string.
char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}
