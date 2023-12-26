/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:43:27 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/18 21:09:04 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	car;

	i = 1;
	car = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		car = car * nb;
		nb--;
	}
	return (car);
}
