/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:34:32 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/27 20:34:12 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	if (i < 0)
		i *= -1;
	array = (int *)malloc(sizeof(int) * (i));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
	int *s1;
	int min;
	int max;

	min = 5;
	max = 10;

	s1 = ft_range(min, max);

	for(int i = 0; i < (max - min); i++)
		printf("%d\n", s1[i]);
	return (0);
}
*/
