/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:50:19 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/29 21:09:15 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*str_stock;

	str_stock = (t_stock_str *)malloc(sizeof(*str_stock) * (ac + 1));
	if (!str_stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str_stock[i].size = ft_strlen(av[i]);
		str_stock[i].str = av[i];
		str_stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	str_stock[i].size = 0;
	str_stock[i].str = 0;
	str_stock[i].copy = 0;
	return (str_stock);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
		t_stock_str *test;

		test = ft_strs_to_tab(argc, argv);
		for (int i = 1; i < argc; i++)
		{
				printf("Size of %d, string %s, copy %s", test[i].size,
					test[i].str, test[i].copy);
				printf("\n");
		}
		free (test);
		return (0);
}*/
