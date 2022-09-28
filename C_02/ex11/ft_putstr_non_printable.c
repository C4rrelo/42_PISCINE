/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:10:34 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/18 17:20:28 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (ft_char_is_printable(c) == 1)
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef" [c / 16]);
			ft_putchar("0123456789abcdef" [c % 16]);
		}
		i++;
	}
}

/*int main (void)
{
	ft_putstr_non_printable("Oi\nvoce esta bem?");
	ft_putchar('\n');
	ft_putstr_non_printable("Oi voce esta bem?\t\vn");
	ft_putchar('\n');
	ft_putstr_non_printable("");
}*/