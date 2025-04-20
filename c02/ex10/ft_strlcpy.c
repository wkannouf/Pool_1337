/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:35:51 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/05 14:37:38 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	b;

	b = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != 0 && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (b);
}

/*int main()
{
	char me[] = "Wissal";
	char you[] = "Youbella";
	printf("%d | %s", ft_strlcpy(you, me, 7), you);
}*/
