/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:01:38 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/15 12:47:43 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	com;
	int	pos;

	i = 0;
	while (i < size)
	{
		pos = i;
		com = 0;
		while (com < size)
		{
			if (tab[com] > tab[pos])
			{
				temp = tab[pos];
				tab[pos] = tab[com];
				tab[com] = temp;
			}
			com++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	array[10] = {12, 9, 4, 3, 15, 666, 23, 45, 98, 68};

	for (int i = 0; i < 10; i++)
		printf(" %d,", array[i]);
	ft_sort_int_tab(array, 10);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf(" %d,", array[i]);
	return (0);
}
*/
