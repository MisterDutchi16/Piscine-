/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrapp <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:00:51 by htrapp            #+#    #+#             */
/*   Updated: 2024/08/06 13:27:34 by htrapp           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, &(*str++), 1);
	write (1, &"\n", 1);
}

void	ft_sort_params(int argc, char **argv)
{
	int		v;
	int		t;
	char	*tmp;

	v = 1;
	while (v < argc - 1)
	{
		t = 1;
		while (t < argc - 1)
		{
			if (ft_strcmp(argv[t], argv[t + 1]) > 0)
			{
				tmp = argv[t + 1];
				argv[t + 1] = argv[t];
				argv[t] = tmp;
			}
			t++;
		}
		v++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
