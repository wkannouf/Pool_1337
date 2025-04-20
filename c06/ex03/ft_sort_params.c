/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:40:18 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/13 20:41:28 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	while (x < argc -1)
	{
		y = 1;
		while (y < argc -1)
		{
			if (ft_strcmp(argv[y], argv[y +1]) > 0)
				ft_swap(&argv[y], &argv[y +1]);
			y++;
		}
		x++;
	}
	y = 1;
	while (y < argc)
	{
		ft_putstr(argv[y]);
		write(1, "\n", 1);
		y++;
	}
}
