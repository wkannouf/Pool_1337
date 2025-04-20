/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:25:06 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/05 17:01:45 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != 0)
	{
		if ((str[i] <= 'z' && str[i] >= 'a')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	printf("%d\n", ft_str_is_alpha("abcdghshnbhshhs"));
	printf("%d\n", ft_str_is_alpha("abcdghshnbh66373%$#s"));
	printf("%d", ft_str_is_alpha(""));
}*/
