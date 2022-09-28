/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmiguel- <tmiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 05:39:52 by tmiguel-          #+#    #+#             */
/*   Updated: 2022/09/28 00:45:55 by tmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

int	ft_len(char **strs, int size, int len_start)
{
	int	len_end;
	int	i;

	len_end = 0;
	i = 0;
	while (i < size)
	{
		len_end += ft_strlen(strs[i]);
		len_end += len_start;
		i++;
	}
	len_end -= len_start;
	return (len_end);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len_f;
	char	*dest;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len_f = ft_len(strs, size, ft_strlen(sep));
	str = (char *)malloc((len_f + 1) * sizeof(char));
	dest = str;
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		i++;
	}
	*dest = '\0';
	return (str);
}

/*int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
	free(result);
}*/