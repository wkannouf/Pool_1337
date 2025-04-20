/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:41:21 by wkannouf          #+#    #+#             */
/*   Updated: 2024/07/25 15:50:22 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_a(int n1, int n2)
{
	ft_print(n1 / 10 + '0');
	ft_print(n1 % 10 + '0');
	write (1, " ", 1);
	ft_print(n2 / 10 + '0');
	ft_print(n2 % 10 + '0');
	if (n1 != 98)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print_a (n1, n2);
			n2++;
		}
		n1++;
	}
}

/*int main()
{
 ft_print_comb2();
}*/
