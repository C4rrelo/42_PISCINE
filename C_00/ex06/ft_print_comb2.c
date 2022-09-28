/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 02:22:37 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/13 22:05:43 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_if_end(int i)
{
	if (i < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	check_if_single(int num)
{
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
	else
	{
		ft_putchar(num / 10 + 48);
		ft_putchar(num % 10 + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			check_if_single(i);
			ft_putchar(' ');
			check_if_single(j);
			check_if_end(i);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	char	i;
	char	j;

	i = 0;
	j = i + 1;	
	ft_print_comb2();
}*/
