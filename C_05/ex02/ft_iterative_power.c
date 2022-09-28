/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:39:08 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/26 05:06:40 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_aux = nb;
	while (power > 1)
	{
		nb_aux *= nb;
		power--;
	}
	return (nb_aux);
}

/*int	main()
{	int nb = 2;
	int power = 2;
	int i;
	i = ft_iterative_power(nb, power);
	printf("%i", i);
}*/
