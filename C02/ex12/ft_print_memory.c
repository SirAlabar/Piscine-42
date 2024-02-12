/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:17:45 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/18 18:37:02 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <unistd.h>

void	ft_print_hex(char *addr)
{
	int		i;
	int		temp;
	char	*hex_base;
	char	*str;

	hex_base = "0123456789abcdef";
	str = (char *)addr;
	i = 0;
	while (str[i])
	{
		temp = str[i] / 16;
		write(1, &hex_base[temp], 1);
		temp = str[i] % 16;
		write(1, &hex_base[temp], 1);
		temp = str[i] / 16;
		write(1, &hex_base[temp], 1);
		temp = str[i] % 16;
		write(1, &hex_base[temp], 1);
		write(1, " ", 1);
	}
	i++;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	char	adress[17];
	char	*str;

	adress = (char *)addr[0];
	i = 0;
	write(1, adress, 16);
	write(1, ": ", 2);
}
/*
int	main(void)
{
	char	a[20] = "UmaSt\nring";

//	char	b[10] = ".\f,\0.";
//	char	c[100] = " \f  HELLO";
	printf("%s\n", a);
	ft_print_memory(a, 20);
//	printf("%s\n", b);
//	ft_putstr_non_printable(b);
//	printf("%s\n", c);
//	ft_putstr_non_printable(c);
	return (0);
}
*/
