/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:58:24 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/18 13:39:47 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

*/
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
/*
int	main(void)
{
	char	*str;
	char	dest[50];
	int		i;

	str = "Uma string";
	for (i = 0; i < str[i]; i++)
		printf("%c", str[i]);
	ft_strcat(dest," com Cat");
	for (i = 0; i < dest[i]; i++)
		printf("%c", dest[i]);
	return (0);
}
*/
