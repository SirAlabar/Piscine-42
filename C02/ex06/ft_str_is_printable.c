/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atr_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:42:05 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/16 18:04:35 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	b = "\f";
	c = "\0";

	printf("%d", ft_str_is_printable(a));
	printf("%d", ft_str_is_printable(b));
	printf("%d", ft_str_is_printable(c));

	return (0);

}
*/
