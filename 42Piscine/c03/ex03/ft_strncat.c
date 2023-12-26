/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:51:01 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/12 03:29:45 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((dest[i] || src[j]) && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
