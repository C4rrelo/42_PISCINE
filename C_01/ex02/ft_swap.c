/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:40:56 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/14 19:16:21 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}

/*int	main(void)
{
	int		a;
	int		b;

	a	=	5;
	b	=	3;
	ft_swap(&a, &b);
	printf("%d", b);
}*/
