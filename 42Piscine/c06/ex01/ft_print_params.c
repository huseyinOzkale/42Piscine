/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:30:47 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/18 19:10:00 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				write (1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
}
