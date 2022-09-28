/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 01:02:44 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/17 00:15:37 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	change;

	a = 0;
	while (a < size)
	{
		change = tab [a];
		tab [a] = tab [size - 1];
		tab [size -1] = change;
		a++;
		size--;
	}
}

/*int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int size;

	size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, ", tab[0], tab[1], tab[2]);
	printf("%d, %d, %d", tab[3], tab[4], tab[5]);
	return(0);
}*/
