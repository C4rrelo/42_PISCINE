/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:52:31 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/20 20:21:41 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_strncmp("Hello", "Hello1", 6));
	//it should return a negative value bcs s1 is less than s2;
	printf("\n%d", ft_strncmp("Hello", "He", 6));
	//it should return a positive value bcs s1 is greater than s2;
	printf("\n%d", ft_strncmp("He", "Hello", 2));
	//it should return a negative value bcs s1 is less than s2;
	printf("\n%d", ft_strncmp("Hello", "Hello", 3));
	//it should return 0 bcs they are the same;
	return (0);
}*/
