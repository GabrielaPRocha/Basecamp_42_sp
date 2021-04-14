/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:49:16 by phenriqu          #+#    #+#             */
/*   Updated: 2021/04/04 17:02:48 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int x, char first, char middle, char last)
{
	int l;

	l = 1;
	while (l <= x)
	{
		if (l == 1)
		{
			ft_putchar(first);
		}
		if (l > 1 && l < x)
		{
			ft_putchar(middle);
		}
		if (l == x && l > 1)
		{
			ft_putchar(last);
		}
		l++;
	}
	return ;
}

void	rush(int x, int y)
{
	int a;

	a = 1;
	while (a <= y && x > 0 && y > 0)
	{
		if (a == 1)
		{
			ft_line(x, 'o', '-', 'o');
			ft_putchar('\n');
		}
		if (a > 1 && a < y)
		{
			ft_line(x, '|', ' ', '|');
			ft_putchar('\n');
		}
		if (a == y && a > 1)
		{
			ft_line(x, 'o', '-', 'o');
			ft_putchar('\n');
		}
		a++;
	}
}
