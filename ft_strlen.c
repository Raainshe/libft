/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:59:04 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 13:21:40 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Returns the length of a string
size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
