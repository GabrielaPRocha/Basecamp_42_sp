/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:37:22 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/07 18:47:51 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int begin;
	int help;

	begin = 0;
	while (begin != size / 2)
	{
		help = tab[begin];
		tab[begin] = tab[(size - 1) - begin];
		tab[(size - 1) - begin] = help;
		begin++;
	}
}
