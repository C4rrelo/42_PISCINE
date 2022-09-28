/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:39:00 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/26 02:47:46 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x < nb)
	{
		if (nb % x == 0)
		{
			return (0);
		}
		x++;
	}
	return (1);
}

/*int	main()
{
	int i;
	i = ft_is_prime(23);
	printf("%d", i);
}*/
