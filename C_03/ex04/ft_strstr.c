/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 04:02:21 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/19 22:54:26 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*int main()
{
	char str[] = "Tiago Miguel Pascoal Carrelo";
	//this function will find in str value;
	//the value of to_find and print evrerything after to_find value;
	char to_find[] = "Pascoal";
	ft_strstr(str, to_find);
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/