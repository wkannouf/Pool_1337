/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 20:38:32 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/09 20:38:36 by wkannouf         ###   ########.fr       */
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
	printf("%d", ft_strlen("wissal"));
}*/
