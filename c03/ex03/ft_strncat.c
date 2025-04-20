/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:20:15 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/09 20:13:42 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[b] != 0 && b < nb)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = 0;
	return (dest);
}

/*int main()
{
	int nb = 0;
	char a [] = "im";
	char b [] = "wissal";
	printf("%s", ft_strncat(a, b, nb));
}*/
