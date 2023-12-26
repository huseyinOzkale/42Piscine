/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:55:09 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/22 11:14:19 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
