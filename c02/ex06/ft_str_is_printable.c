/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 00:45:40 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/05 13:57:22 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("%d\n", ft_str_is_printable("wissal_kann "));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("\tyoubella\n"));
}*/
