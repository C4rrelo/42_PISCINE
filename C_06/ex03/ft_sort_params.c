/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:51:01 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/23 12:26:36 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	l;

	i = 1;
	while (i < argc - 1)
	{
		l = 1;
		while (l < argc - 1)
		{
			if (ft_strcmp(argv[l], argv[l + 1]) > 0)
				ft_swap(&argv[l], &argv[l + 1]);
			l++;
		}
		i++;
	}
	l = 1;
	while (l < argc)
	{
		ft_putstr(argv[l]);
		write(1, "\n", 1);
		l++;
	}
	return (0);
}
