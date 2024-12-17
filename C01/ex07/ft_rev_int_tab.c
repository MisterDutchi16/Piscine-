/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrapp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:57:48 by htrapp            #+#    #+#             */
/*   Updated: 2024/07/25 08:49:12 by htrapp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size - 1]);
		i++;
		size--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	tab[7] = {0, 1, 2, 3, 4, 5, 6};

	ft_rev_int_tab(tab, 7);
	while (i < 7)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
*/
