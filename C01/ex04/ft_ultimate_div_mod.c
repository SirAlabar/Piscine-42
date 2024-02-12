/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:34:59 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/13 20:12:06 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	pa;
	int	pb;

	pa = *a;
	pb = *b;
	*a = pa / pb;
	*b = pa % pb;
}
/*	
int	main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	
	printf("a=%d b=%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Result = %d\n",a);
	printf("Rest = %d\n",b);

	return (0);
}
*/
