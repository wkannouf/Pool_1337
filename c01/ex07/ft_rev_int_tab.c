/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 05:58:45 by wkannouf          #+#    #+#             */
/*   Updated: 2024/07/30 21:25:07 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = temp;
		i++;
	}
}

/*int main()
{
	int size;
	int tab[9] = {1, 2, 3, 4, 5};
	size = 5;
	ft_rev_int_tab(tab, size);
printf(" %d, %d, %d, %d, %d",tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
