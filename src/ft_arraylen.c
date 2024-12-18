/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:33:22 by rmakoni           #+#    #+#             */
/*   Updated: 2024/12/18 12:37:40 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Gets the length of a NULL-terminated array of strings.
* Counts elements until a NULL pointer is found.
*
* @param arr Array of strings to measure (must end with NULL)
* @return Number of strings before NULL pointer
*
* Example:
* char *arr[] = {"hello", "world", NULL};  // returns 2
*/
int	ft_arrlen(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}
