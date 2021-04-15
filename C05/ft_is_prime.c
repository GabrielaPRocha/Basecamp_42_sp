/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:47:44 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/14 21:30:53 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int number;

	number = 2;
	if (nb == 2)
	{
		return (1);
	}
	if (nb <= 1)
	{
		return (0);
	}
	while (nb % number != 0)
	{
		number++;
		if (number == nb)
		{
			return (1);
		}
	}
	return (0);
}
