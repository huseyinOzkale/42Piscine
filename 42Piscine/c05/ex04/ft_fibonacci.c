/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:20:44 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/18 12:41:56 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 1 || index == 2)
		return (1);
	else if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
