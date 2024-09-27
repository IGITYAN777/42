/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:22:49 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/08 16:52:43 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	fun_while(int j, int col, char ch1, char ch2)
{
	while (j <= col)
	{
		if (j == 1 || j == col)
		{
			ft_putchar(ch1);
		}
		else
		{
			ft_putchar(ch2);
		}
		++j;
	}
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	i = 1;
	i = 1;
	while (i <= row)
	{
		j = 1;
		if (i == 1)
		{
			fun_while(j, col, 'A', 'B');
		}
		else if (i < row)
		{
			fun_while(j, col, 'B', ' ');
		}
		else
		{
			fun_while(j, col, 'C', 'B');
		}
		ft_putchar('\n');
		++i;
	}
}
