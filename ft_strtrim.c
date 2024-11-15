/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:40:41 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:12:18 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns 1 if they match and 0 if not
int	check_char(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//removes specified characters from beginning and end of given string.
char	*ft_strtrim(const char *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_char((char)s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && check_char((char)s1[end - 1], (char *)set))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
