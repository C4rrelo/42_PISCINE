/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 06:15:59 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/17 06:19:37 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase("\0"));
	printf("\n%d", ft_str_is_uppercase("0123456789"));
	printf("\n%d", ft_str_is_uppercase("ABCXXDDFGDFHN"));
	printf("\n%d", ft_str_is_uppercase("-_134556efghij67"));
}*/