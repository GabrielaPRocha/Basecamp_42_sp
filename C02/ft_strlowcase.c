/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:40:29 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/10 14:19:32 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 65 && str[position] <= 90)
		{
			str[position] = str[position] + 32;
		}
		position++;
	}
	return (str);
}
