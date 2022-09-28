/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 02:29:13 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/27 18:49:32 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
			result *= nb * ft_recursive_factorial(nb - 1);	
	}
	if (nb < 0)
		return (0);
	return (result);
}

int	main()
{
	int nb = 10;
	int nb_aux;
	nb_aux = ft_recursive_factorial(nb);
	printf("%d", nb_aux);
}
