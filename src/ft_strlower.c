/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:48:01 by rmakoni           #+#    #+#             */
/*   Updated: 2025/01/15 14:04:02 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(char *str)
{
	char	*lower_str;
	size_t	s_len;
	int		i;

	if (!str)
		return (NULL);
	s_len = ft_strlen(str);
	lower_str = malloc(s_len + 1);
	if (!lower_str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		lower_str[i] = ft_tolower(str[i]);
		i++;
	}
	lower_str[i] = '\0';
	return (lower_str);
}
