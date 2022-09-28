/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:20:00 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/19 03:59:10 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_printable("\0"));
	printf("\n%d", ft_str_is_printable("0123456r	 9"));
	printf("\n%d", ft_str_is_printable("ABCvdsvx345  66"));
	printf("\n%d", ft_str_is_printable("-_134556efgAHAHij67"));
}*/