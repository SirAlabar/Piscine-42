/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:24:59 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/01/24 11:14:29 by hluiz-ma         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	next_nb;
	int	ver;

	next_nb = 0;
	ver = 0;
	if (nb <= 0)
	{
		next_nb = 2;
		ver = 1;
	}
	if (nb == 1 || nb == 2)
	{
		next_nb = 2;
		ver = 1;
	}
	while (ver != 1)
	{
		ver = ft_is_prime(nb);
		next_nb = nb;
		nb++;
	}
	return (next_nb);
}
