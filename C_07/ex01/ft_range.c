/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 05:39:42 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/27 18:56:54 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	i;
	int	*ptr;
	int	*buff;

	diff = max - min;
	i = 0;
	if (min >= max)
		return (0);
	ptr = ((buff = (int *)malloc(diff * sizeof(int))));
	if (!ptr)
		return (0);
	while (i < diff)
	{
		buff[i] = min + i;
		i++;
	}
	return (buff);
}

/*int	main()
{
	int min;
	int max;
	int *vet;
	int	i = 0;
	int size;

	min = 5;
	max = 10;
	size = max - min;
	vet = ft_range(min, max);

	while (i < size)
	{
		printf("%d, ", vet[i]);
		i++;
	}
}*/
