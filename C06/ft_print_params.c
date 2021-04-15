/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:58:33 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/15 13:35:31 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
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

	x = 1;
	while (x < argc)
	{
		ft_print_params(argv[x]);
		x++;
	}
	return (0);
}
