/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpereira <gpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:10:41 by gpereira          #+#    #+#             */
/*   Updated: 2021/04/10 14:18:39 by gpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int place;

	place = 0;
	while (src[place] != '\0')
	{
		dest[place] = src[place];
		place++;
	}
	dest[place] = '\0';
	return (dest);
}
