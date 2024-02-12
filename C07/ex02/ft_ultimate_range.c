/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:14:31 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/27 20:42:34 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = (NULL);
		return (-1);
	}
	i = 0;
	while (max > min)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
        int *s1;
        int min;
        int max;
	int size;

        min = 5;
        max = 10;

        size = ft_ultimate_range(&s1, min, max);

        for(int i = 0; i < (max - min); i++)
                printf("%d\n", s1[i]);
        return (0);
}
*/
