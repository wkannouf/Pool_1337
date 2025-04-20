/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 05:46:16 by wkannouf          #+#    #+#             */
/*   Updated: 2024/07/29 02:21:30 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	tall;

	tall = 0;
	while (str[tall] != 0)
	{
		tall++;
	}
	return (tall);
}

/*int main()
{
	char a[] = "wissal";
	printf("%d", ft_strlen(a));
}*/
