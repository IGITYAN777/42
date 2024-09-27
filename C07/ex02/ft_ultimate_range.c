/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:03:17 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 22:45:30 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	p = (int *)malloc(i * sizeof(int));
	if (p == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		p[i] = min;
		++i;
		++min;
	}
	*range = p;
	return (i);
}
