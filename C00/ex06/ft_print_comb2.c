/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:13:58 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/12 15:43:31 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func_help(int i1, int i2, int j1, int j2)
{
	if (i1 == '9' && i2 == '8')
	{
		return ;
	}
	while (j2 <= '9')
	{
		write(1, &i1, 1);
		write(1, &i2, 1);
		write(1, " ", 1);
		write(1, &j1, 1);
		write(1, &j2, 1);
		write(1, ",", 1);
		if (!(i1 == '9' && i2 == '8' && j1 == '9' && j2 == '9'))
		{
			write(1, " ", 1);
		}
		j2++;
	}
}

void	ft_print_comb2(void)
{
	char	i1;
	char	i2;
	char	j1;
	char	j2;

	i1 = '0';
	while (i1 <= '9')
	{
		i2 = '0';
		while (i2 <= '9')
		{
			j1 = i1;
			j2 = i2 + 1;
			while (j1 <= '9')
			{
				func_help(i1, i2, j1, j2);
				j1++;
				j2 = '0';
			}
			i2++;
		}
		i1++;
	}
	write(1, "98 99", 5);
}
