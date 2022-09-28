/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:09:41 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/21 10:52:46 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d", ft_strcmp("Hello", "Hello1"));
	//it should return a negative value bcs s1 is less than s2;
	printf("\n%d", ft_strcmp("Hello", "He"));
	//it should return a positive value bcs s1 is greater than s2;
	printf("\n%d", ft_strcmp("He", "Hello"));
	//it should return a negative value bcs s1 is less than s2;
	printf("\n%d", ft_strcmp("Hello", "Hello"));
	//it should return 0 bcs they are the same;
	return (0);
}*/
