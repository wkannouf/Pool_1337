/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:59:06 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/15 20:11:16 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	x;

	x = nb;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	index = 2;
	if (x >= 2)
	{
		while (index * index <= x)
		{
			if (index * index == x)
			{
				return (index);
			}
			index++;
		}
	}
	return (0);
}
