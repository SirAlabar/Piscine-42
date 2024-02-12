/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:43:49 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/24 11:14:01 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	d;
	int	prime;

	d = 2;
	prime = 0;
	if (nb < 2)
		return (0);
	if (nb == d)
		return (1);
	while (d <= nb / d)
	{
		if (nb % d == 0)
			prime++;
		d++;
	}
	if (prime == 0)
		return (1);
	else
		return (0);
}
