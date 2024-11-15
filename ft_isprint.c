/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:48:47 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/15 13:42:54 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks if the peram entered is printable
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
