/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huozkale <huozkale@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:38:44 by huozkale          #+#    #+#             */
/*   Updated: 2023/09/10 12:24:41 by huozkale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
