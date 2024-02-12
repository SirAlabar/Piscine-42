/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:30:33 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/18 19:29:54 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	j;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = size_dest;
	if (size <= i)
	{
		return (size_src + size);
	}
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
/*
	if (size < size_dest)
		return (size_src + size);
	else
		return (size_dest + size_src);
*/

/*
int	main(void)
{
	char	str[50] = "Uma string";
	char	dest[50] = " com Cat!";
	int		i;

	for (i = 0; i < str[i]; i++)
		printf("%c", str[i]);
	for (i = 0; i < dest[i]; i++)
		printf("%c", dest[i]);
	printf ("%d\n", ft_strlcat(dest, str , 25));
	printf ("%d\n", *dest);
	return (0);
}*/
