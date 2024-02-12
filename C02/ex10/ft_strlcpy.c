/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:12:15 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/19 20:45:19 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

*/
int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	*str;
	char	dest[15];
	int		i;
	int		len;

	len = 0;
	str = "Uma string";
	for (i = 0; i < str[i]; i++)
		printf("%c", str[i]);
	printf("\n");
	printf("%s", dest);
		len = ft_strlen(str);
		printf("\n%d" , len);
	ft_strlcpy(dest, str, 15);
	printf("\n");
	len = ft_strlen(str);
	for (i = 0; i < dest[i]; i++)
		printf("%c", dest[i]);
	printf("\n%d" , len);
	printf("\nBytes from dest:\n");
	for(i=0; i < dest[i]; ++i)
		dest[i] == 0 ? printf("\\0") : printf("%c ", dest[i]);
	return (0);
}
*/
