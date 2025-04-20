/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:52:34 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/05 13:35:34 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*int main()
{
	char src[10];
	char dest[10];
	unsigned int n;
	printf("Enter youre string:");
	scanf("%s",&src);
	printf("Enter n:");
	scanf("%d",&n);
	puts(ft_strncpy(dest, src, n));
}*/
