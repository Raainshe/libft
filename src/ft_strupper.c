/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:04:50 by rmakoni           #+#    #+#             */
/*   Updated: 2025/01/15 14:09:48 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strupper(char *str)
{
	size_t	len;
	int		i;
	char	*upper_str;

	if (!str)
		return (NULL);
	len = ft_strlen(str);
	upper_str = malloc(len + 1);
	if (!upper_str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		upper_str[i] = ft_toupper(str[i]);
		i++;
	}
	upper_str[i] = '\0';
	return (upper_str);
}
