/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:21:37 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 16:51:31 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / 2)
	{
		if (i * i == nb)
		{
			return (i);
		}
		++i;
	}
	return (0);
}

/*int main()
{
	int d = ft_sqrt(1023);
	printf("%d", d);
}*/
