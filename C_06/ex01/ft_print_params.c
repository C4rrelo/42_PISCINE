/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:13:16 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/23 11:34:19 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 1;
	while (argv[argc] != NULL)
	{
		write(1, &argv[argc][i], 1);
		i++;
		if (argv[argc][i] == '\0')
		{
			argc++;
			i = 0;
			write(1, "\n", 1);
		}
	}
	return (0);
}
