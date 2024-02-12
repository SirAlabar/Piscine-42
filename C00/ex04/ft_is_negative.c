/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 20:35:08 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/11 20:40:44 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	l; 

	if (n >= 0)
		l = 'P';
	else
		l = 'N';
	write(1, &l, 1);
}

/*int	main(void)
{
	ft_is_negative(0);
	ft_is_negative(-5);
	ft_is_negative(5);
	return (0);
}*/
