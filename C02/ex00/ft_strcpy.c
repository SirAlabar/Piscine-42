/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:21:56 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/19 21:40:23 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
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
/*
int	main(void)
{
	char	*str;
	char	dest[15] = {0, 1, 2, 3};
	int		i;

	str = "Uma string";
	for (i = 0; i < str[i]; i++)
		printf("%c", str[i]);
	ft_strcpy(dest, str);
	printf("\n");
	for (i = 0; i < dest[i]; i++)
		printf("%c", dest[i]);
	return (0);
}
*/
