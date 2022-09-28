/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:12:14 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/17 06:15:05 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_lowercase("\0"));
	printf("\n%d", ft_str_is_lowercase("0123456789"));
	printf("\n%d", ft_str_is_lowercase("abckdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("-_134556efghij67"));
}*/