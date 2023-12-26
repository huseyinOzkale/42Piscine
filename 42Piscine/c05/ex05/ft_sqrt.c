/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:50:09 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/18 14:05:36 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sayi;

	sayi = 1;
	if (nb <= 0)
		return (0);
	while (sayi < 46341)
	{
		if (sayi * sayi == nb)
			return (sayi);
		sayi++;
	}
	return (0);
}
