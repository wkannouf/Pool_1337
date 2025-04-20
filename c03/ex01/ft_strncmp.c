/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:23:46 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/09 20:11:04 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n -1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
	unsigned int n;
	char s1[] ="orange";
	char s2[] = "or";
	n = 4;
	printf("%d", ft_strncmp(s1,s2,n));
}*/
