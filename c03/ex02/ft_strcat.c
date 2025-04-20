/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:10:22 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/09 20:12:44 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	b = 0;
	while (src[b] != 0)
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
	char dest[8] = "ana";
	char src[] = "wyak";
	ft_strcat(dest, src);
	printf("%s", dest);
}*/
