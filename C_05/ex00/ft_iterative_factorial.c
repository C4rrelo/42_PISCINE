/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 02:28:32 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/26 02:41:38 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}

/*int	main()
{
	int nb = 10;
	int nb_aux;
	nb_aux = ft_iterative_factorial(nb);
	printf("%d", nb_aux);
}*/
