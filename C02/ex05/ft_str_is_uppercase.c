/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:39:37 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/16 17:41:12 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char *a;
	char *b;
	char *c;

	a = "UMASTRING";
	b = "Um4 Str1ng";
	c = "\0";

	printf("%d", ft_str_is_uppercase(a));
	printf("%d", ft_str_is_uppercase(b));
	printf("%d", ft_str_is_uppercase(c));

	return (0);

}
*/
