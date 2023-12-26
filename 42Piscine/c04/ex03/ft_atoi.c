/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:44:22 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/12 15:48:26 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 1 ;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (sign * result);
}
