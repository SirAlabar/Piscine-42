/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 21:26:01 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/14 20:26:37 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_draw04(int c, int l, int x, int y)
{
	if ((c == 1 && l == 1) || (c == x && l == y && x > 1 && y > 1))
	{
		ft_putchar('A');
	}
	else if ((c == x && l == 1) || (c == 1 && l == y))
	{
		ft_putchar('C');
	}
	else if (c > 1 && c < x && l > 1 && l < y)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
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
				ft_draw04(c, l, x, y);
				c++;
			}
			ft_putchar('\n');
			l++;
		}
	}
	else
		write(1, "Wrong Parameters\n", 17);
}
