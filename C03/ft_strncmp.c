/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:39:45 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/13 15:05:49 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] && s2[count] && count < n)
	{
		count++;
	}
	if (n == 0)
	{
		return (0);
	}
	if (count == n)
	{
		count--;
	}
	return (s1[count] - s2[count]);
}
