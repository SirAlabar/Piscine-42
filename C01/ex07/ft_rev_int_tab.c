/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 22:28:36 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/15 12:48:51 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	num1;
	int	numlast;
	int	temp;

	num1 = 0;
	numlast = size - 1;
	while (numlast > num1)
	{
		temp = tab[num1];
		tab[num1] = tab[numlast];
		tab[numlast] = temp;
		num1++;
		numlast--;
	}
}
/*
int	main(void)
{
	int	array[10] = {12, 9, 4, 3, 15, 666, 23, 45, 98, 68};

	for(int i = 0; i < 10; i++)
		printf(" %d,", array[i]);
	ft_rev_int_tab(array, 10);
	printf("\n");
		for(int i = 0; i < 10; i++)
		printf(" %d,", array[i]);
	return (0);
}
*/
