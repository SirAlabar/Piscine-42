/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nungarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:07:58 by nungarci          #+#    #+#             */
/*   Updated: 2024/01/14 20:40:07 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_draw00(int l, int c, int x, int y)
{
	if ((c == 1 && l == 1) || (c == x && l == y))
	{
		ft_putchar('o');
	}
	else if ((c == x && l == 1) || (c == 1 && l == y))
	{
		ft_putchar('o');
	}
	else if (c > 1 && c < x && l > 1 && l < y)
	{
		ft_putchar(' ');
	}
	else if ((c > 1 && c < x && l == 1) || (c > 1 && c < x && l == y))
	{
		ft_putchar('-');
	}
	else
	{
		ft_putchar('|');
	}
}

void	rush(int x, int y)
{
	int	c;
	int	l;

	if (x >= 1 || y >= 1)
	{
		l = 1;
		while (l <= y)
		{
			c = 1;
			while (c <= x)
			{
				ft_draw00(l, c, x, y);
				c++;
			}
			ft_putchar('\n');
			l++;
		}
	}
	else
		write(1, "Wrong Parameters\n", 17);
}
