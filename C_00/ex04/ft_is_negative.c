/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:12:12 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/12 00:55:55 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	b;
	char	p;

	b = 'N';
	p = 'P';
	if (n >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(-1);
}*/
