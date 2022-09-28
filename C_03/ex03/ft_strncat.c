/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 21:29:16 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/19 22:02:57 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (len < nb && src[len] != '\0')
	{
		dest[i + len] = src[len];
		len++;
	}
	dest[i + len] = '\0';
	return (dest);
}

/*int	main()
{
	char	dest[] = "42 ";
	//this function will put src value after dest value;
	char	src[] = "Network";
	//but with a input limit (in this case only first 6 letters of src);
	printf("%s", ft_strncat(dest, src, 6));
	return (0);
}*/
