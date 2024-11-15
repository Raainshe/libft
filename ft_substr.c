/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:12:12 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:12:51 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Allocates (with malloc(3)) and returns a substring
//from the string ’s’.
//The substring begins at index ’start’ and is of
//maximum size ’len’.
//s: The string from which to create the substring.
//start: The start index of the substring in the
//string ’s’.
//len: The maximum length of the substring
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
