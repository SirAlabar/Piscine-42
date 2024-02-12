/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:14:58 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/16 17:10:13 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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

	a = "UmaString";
	b = "Um4 Str1ng";
	c = "\0";

	printf("%d", ft_str_is_alpha(a));
	printf("%d", ft_str_is_alpha(b));
	printf("%d", ft_str_is_alpha(c));

	return (0);

}
*/
