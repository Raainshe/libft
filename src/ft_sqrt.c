/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryan <ryan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:08:02 by ryan              #+#    #+#             */
/*   Updated: 2024/12/10 13:08:37 by ryan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int	is_factor;

	if (nb < 0)
		return (0);
	is_factor = 1;
	while ((is_factor * is_factor <= nb) && is_factor <= 46340)
	{
		if ((is_factor * is_factor) == nb)
		{
			return (is_factor);
		}
		is_factor++;
	}
	return (0);
}
