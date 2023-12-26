/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:42:03 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/04 18:06:41 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolen;
	int	kalan;

	bolen = *a / *b;
	kalan = *a % *b;
	*a = bolen;
	*b = kalan;
}
