/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:24:45 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/16 17:31:29 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	b = "123456";
	c = "\0";

	printf("%d", ft_str_is_numeric(a));
	printf("%d", ft_str_is_numeric(b));
	printf("%d", ft_str_is_numeric(c));

	return (0);

}
*/
