/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:42:23 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 18:10:43 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the peram is on the Ascii table
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
