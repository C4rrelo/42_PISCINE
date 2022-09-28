/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 05:39:48 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/27 20:14:35 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		diff;
	int		i;
	int		*buff;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	buff = malloc(diff * sizeof(int *));
	if (!buff)
	{
		*range = 0;
		return (-1);
	}
	*range = buff;
	i = 0;
	while (i < diff)
	{
		buff[i] = min + i;
		i++;
	}
	return (diff);
}

/*int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/