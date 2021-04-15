/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:15:37 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/15 02:36:32 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int x;

	x = argc - 1;
	while (x > 0)
	{
		ft_rev_params(argv[x]);
		x--;
	}
	return (0);
}
