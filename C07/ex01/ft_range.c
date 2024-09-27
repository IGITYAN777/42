/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:58:51 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 22:13:48 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc((max - min) * sizeof(int));
	if (dest == 0)
		return (0);
	while (min <= max)
	{
		dest[i] = min;
		++i;
		++min;
	}
	return (dest);
}
