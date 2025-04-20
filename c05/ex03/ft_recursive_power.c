/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:08:15 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/15 20:09:40 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0 || nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		result *= ft_recursive_power(nb, (power -1));
	return (result);
}

/*int main()
{
	printf("%d", ft_recursive_power(6,4));

}*/
