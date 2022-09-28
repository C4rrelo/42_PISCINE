/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 00:24:16 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/14 19:40:42 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	c;
	int	d;
	int *div;
	int *mod;

	c	=	10;
	d	=	3;
	div	=	&c;
	mod	=	&d;

	ft_div_mod(c, d, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
}*/
