/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:18:11 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/23 11:36:24 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[argc][i] != '\0')
	{
		write(1, &argv[argc][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
