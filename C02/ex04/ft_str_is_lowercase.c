/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:32:11 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/16 17:37:16 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	a = "umastring";
	b = "Um4 Str1ng";
	c = "\0";

	printf("%d", ft_str_is_lowercase(a));
	printf("%d", ft_str_is_lowercase(b));
	printf("%d", ft_str_is_lowercase(c));

	return (0);

}
*/
