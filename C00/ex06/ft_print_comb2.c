/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrapp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:49:03 by htrapp            #+#    #+#             */
/*   Updated: 2024/07/19 11:59:43 by htrapp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(char b1, char b2)
{

	b1 = '0';
	while (b1 <= '9')
	{
		b2 = '0';
		while (b2 <= '9')
		b2++;
	}
	b1++;
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	
	a1 = '0';
	while (a1 <= '9')
	{
		a2 = '1';
		while (a2 <= '9')
		{
			write(1, &a1, 1);
			write(1, &a2, 1);
			ft_print_comb(b1, b2);
			a2++;
		}
		a1++;
	}
}

int	main(void)
{
	ft_print_comb1();
	ft_print_comb2();
}
