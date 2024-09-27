/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:55:49 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 17:02:46 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	t_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!t_prime(nb))
		++nb;
	return (nb);
}

/*int main()
{
	printf("%d", ft_find_next_prime(2));
}*/
