/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlajoye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:13:41 by tlajoye           #+#    #+#             */
/*   Updated: 2021/03/24 12:27:08 by tlajoye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
			write(1, "-2147483648", 11);
			return ;
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb +'0');
	}
	else if (nb < 0) 
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr( nb / 10);
		ft_putnbr( nb % 10);
	}
}

