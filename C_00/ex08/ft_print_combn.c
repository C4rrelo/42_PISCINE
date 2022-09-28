/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:27:42 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/13 14:21:12 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int ndig, int segnum[])
{
	int		ind;

	ind = 0;
	while (ind < ndig)
	{
		ft_putchar(48 + segnum[ind]);
		ind++;
	}
	ind = ndig - 1;
	while (ind >= 0)
	{
		if (segnum[ind] != 9 - (ndig - 1 - ind))
		{
			ft_putchar(',');
			ft_putchar(' ');
			break ;
		}
		ind--;
	}
}

void	ft_print_combn_recursive(int ndig, int act, int segnum[], int stind)
{
	int	ind;
	int	max;

	if (act == ndig)
	{
		ft_write_comb(ndig, segnum);
	}
	else
	{
		max = 10 - (ndig - act);
		ind = stind + 1;
		while (ind <= max)
		{
			segnum[act] = ind;
			ft_print_combn_recursive(ndig, act + 1, segnum, ind);
			ind++;
		}
	}
}

void	ft_print_combn(int ndig)
{
	int	segnum[10];
	int	ind;

	ind = 0;
	while (ind < ndig)
	{
		segnum[ind] = 0;
		ind++;
	}
	ft_print_combn_recursive(ndig, 0, segnum, -1);
}

/*int	main(void)
{
	ft_print_combn(9);
}*/
