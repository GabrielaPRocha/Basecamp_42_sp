/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:07:48 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/14 14:57:27 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_positive(int nb)
{
	write(1, "-", 1);
	if (nb == -2147483648)
	{
		write(1, "2", 1);
		nb = -147483648;
	}
	return (nb - nb - nb);
}

void	ft_putnbr(int nb)
{
	char number;

	if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = 147483647;
	}
	if (nb < 0)
	{
		nb = ft_positive(nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		number = (nb % 10) + '0';
		write(1, &number, 1);
	}
	else
	{
		number = nb + '0';
		write(1, &number, 1);
	}
}
