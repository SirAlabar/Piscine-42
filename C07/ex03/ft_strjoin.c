/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:14:41 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/29 17:49:29 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		n++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len_strs(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*array;
	int		len;

	if (size == 0)
	{
		array = malloc(sizeof(char));
		*array = 0;
		return (array);
	}
	len = ft_len_strs(strs, sep, size);
	array = (char *)malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i < size - 1)
			ft_strcat(array, sep);
		i++;
	}
	array[i] = '\0';
	return (array);
}
/*
int	main(void)
{
	char	**s;
	char	*sep;

	sep = "-";
	s =(char **)malloc(sizeof(char*) * 4);
	s[0] = "Hello";
		s[1] = "b";
		s[2] = "c";
		s[3] = "d";
	ft_strjoin(1, s, sep);
	return (1);
}
*/
