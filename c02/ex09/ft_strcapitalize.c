/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:05:53 by wkannouf          #+#    #+#             */
/*   Updated: 2024/08/05 14:12:28 by wkannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	ft_strlowercase(str);
	while (str[i] != 0)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (b == 1)
				str[i] -= 32;
			b = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			b = 0;
		else
			b = 1;
		i++;
	}
	return (str);
}

/*int main()
{
	char me[] = "hello my name is wissal";
	printf("%s\n", ft_strcapitalize(me));
	char you[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(you));
}*/
