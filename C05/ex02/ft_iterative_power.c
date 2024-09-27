/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:27:38 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 16:44:54 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	if (nb == power && power == 0)
		return (1);
	while (power)
	{
		i = i * nb;
		--power;
	}
	return (i);
}

/*int main()
{
	int t = ft_iterative_power(2, 10);
	printf("%d", t);
}*/
