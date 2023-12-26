/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:49:39 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/09 20:12:24 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else if (str[i] == '\0')
			return (1);
		else 
			return (0);
	}
	return (1);
}
