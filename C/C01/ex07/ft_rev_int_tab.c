/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlajoye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:03:26 by tlajoye           #+#    #+#             */
/*   Updated: 2021/03/22 16:50:43 by tlajoye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *i, int *j)
{
	int x;

	x = *i;
	*i = *j;
	*j = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
