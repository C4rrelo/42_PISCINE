/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:39:02 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/26 02:28:58 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	numb;

	numb = nb;
	if (numb <= 0)
	{
		return (0);
	}
	if (numb == 1)
	{
		return (1);
	}
	i = 2;
	if (numb >= 2)
	{
		while (i * i <= numb)
		{
			if (i * i == numb)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}

/*int    main()
{
	printf("sqrt of %d is %d\n", 666, ft_sqrt(666));
        return (0);
}*/