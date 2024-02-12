/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:47:48 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/13 19:04:27 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *p1;
	int *p2;

	a = 5;
	b = 2;
	p1 = &div;
	p2 = &mod;
	
	ft_div_mod(a, b, p1, p2);
	printf("Result = %d\n",div);
	printf("Rest = %d\n",mod);

	return (0);
}*/
