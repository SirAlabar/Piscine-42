/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:57:43 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/21 16:37:26 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	dou_char(char *symbols)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (symbols[i])
	{
		j = i + 1;
		while (symbols[j])
		{
			if (symbols[i] == symbols[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_nbr(int n, int i, char *symbols)
{
	long int	nl;

	nl = n;
	if (nl < 0)
	{
		nl = -nl;
		ft_putchar('-');
	}
	if (nl >= i)
		print_nbr(nl / i, i, symbols);
	ft_putchar(symbols[nl % i]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	if (i < 2)
		return ;
	if (dou_char(base))
		return ;
	print_nbr(nbr, i, base);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*b1;
	char	*b2;
	char	*b3;

	b1 = "01";
	b2 = "0123456789abcdef";
	b3 = "poneyvif";
	printf("base: %s\n", b1);
	printf("base: %s\n", b2);
	printf("base: %s\n", b3);
	ft_putnbr_base(42, b1);
	printf("\n");
	ft_putnbr_base(42, b2);
	printf("\n");
	ft_putnbr_base(42, b3);
	printf("\n");
	return (0);
}
*/
