/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:06:17 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/19 20:26:53 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[11] = "uma String";
	char	b[11] = "um4 Str1ng";

	printf("%s\n", a);
	ft_strupcase(a);
	printf("%s\n", a);
	printf("%s\n", b);
	ft_strupcase(b);
	printf("%s\n", b);
	return (0);
}
*/
