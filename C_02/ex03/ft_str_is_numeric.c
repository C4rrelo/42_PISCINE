/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:05:53 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/17 06:10:16 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_numeric("\0"));
	printf("\n%d", ft_str_is_numeric("0123456789"));
	printf("\n%d", ft_str_is_numeric("abckdefghijkl"));
	printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
}*/