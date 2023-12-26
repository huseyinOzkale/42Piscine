/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:35:23 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/19 12:58:03 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int n)
{
	int	i;

	i = 2;
	if (n == 2)
		return (1);
	while (i <= n / i)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (2);
	while (i < nb)
	{
		if (ft_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
