/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:06:34 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/18 16:33:38 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	int		valid;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && (i < len))
	{
		if (haystack[i] == needle[0])
		{
			x = 0;
			valid = 1;
			while (needle[x] && valid)
			{
				if (needle[x] != haystack[i + x] || (x + i > len - 1))
					valid = 0;
				x++;
			}
			if (valid == 1)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*hay;
// 	const char	*need;
// 	size_t		len;
// 	char		*result;

// 	len = 9;
// 	hay = "Hello Meow hellow";
// 	need = "Meo";
// 	result = ft_strnstr(hay, need, len);
// 	printf("%s", result);
// 	return (0);
// }
