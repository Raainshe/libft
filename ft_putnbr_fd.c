/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:12:31 by rmakoni           #+#    #+#             */
/*   Updated: 2024/10/21 17:14:09 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse_print(char *snum, int len, int fd)
{
	len--;
	while (len >= 0)
	{
		write(fd, &snum[len], 1);
		len--;
	}
}

//Writes the numbers inputed on the console
void	ft_putnbr_fd(int n, int fd)
{
	char	snum[12];
	int		i;
	int		r;
	int		is_neg;

	is_neg = 0;
	i = 0;
	if (n == 0)
		snum[i++] = '0';
	if (n < 0)
		is_neg = 1;
	while (n != 0)
	{
		if (n < 0)
			r = (-1) * (n % 10);
		else
			r = n % 10;
		snum[i++] = r + '0';
		n = n / 10;
	}
	if (is_neg)
		snum[i++] = '-';
	snum[i] = '\0';
	reverse_print(snum, i, fd);
}
