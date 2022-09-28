/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:39:06 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/26 05:05:14 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	nb_aux;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	nb_aux = nb;
	if (power > 1)
	{
		return (nb_aux * ft_recursive_power(nb, (power - 1)));
	}
	return (nb_aux);
}

/*int	main()
{	int nb = 8;
	int power = 2;
	int i;
	i = ft_iterative_power(nb, power);
	printf("%i", i);
}*/
