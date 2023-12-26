/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:10:42 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/18 21:07:02 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
