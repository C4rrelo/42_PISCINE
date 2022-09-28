/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:18:15 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/23 11:47:47 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	len = argc -1;
	i = 0;
	while (len > 0)
	{
		write(1, &argv[len][i], 1);
		i++;
		if (argv[len][i] == '\0')
		{
			i = 0;
			len--;
			write(1, "\n", 1);
		}
	}
	return (0);
}
