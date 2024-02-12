/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:48:34 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/19 21:58:35 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	a[11] = "UMa STRINg";
	char	b[11] = "um4 Str1ng";

	printf("%s\n", a);
	ft_strlowcase(a);
	printf("%s\n", a);
	printf("%s\n", b);
	ft_strlowcase(b);
	printf("%s\n", b);
	return (0);
}
*/
