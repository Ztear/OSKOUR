/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlajoye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:26:08 by tlajoye           #+#    #+#             */
/*   Updated: 2021/03/24 14:44:24 by tlajoye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int value;

	i = 0;
	value = 0;
	sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] - 48;
		i++;
	}
	return (value * sign);
}

#include <stdio.h>

int		main(void)
{
	char str[] = "    \n   -+---86485467dfs789";
	printf("%d\n", ft_atoi(str));
	return (0);
}
