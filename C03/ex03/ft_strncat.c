/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:41:14 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/20 17:16:57 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*str;
	char	dest[50];
	int		i;

	str = "Uma string";
	for (i = 0; i < str[i]; i++)
		printf("%c", str[i]);
	ft_strncat(dest," com Cat", 3);
	for (i = 0; i < dest[i]; i++)
		printf("%c", dest[i]);
	return (0);
}

