/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:22:49 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/08 17:11:34 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch);

void	special_while(int j, int col, char ch1, char ch3)
{
	while (j <= col)
	{
		if (j == 1)
		{
			ft_putchar(ch1);
		}
		else if (j == col)
		{
			ft_putchar(ch3);
		}
		else
		{
			ft_putchar(' ');
		}
		++j;
	}
}

void	fun_while(int j, int col, char ch1, char ch3)
{
	while (j <= col)
	{
		if (j == 1)
		{
			ft_putchar(ch1);
		}
		else if (j == col)
		{
			ft_putchar(ch3);
		}
		else
		{
			ft_putchar('B');
		}
		++j;
	}
}

void	rush(int col, int row)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	while (i <= row)
	{
		j = 1;
		if (i == 1)
		{
			fun_while(j, col, 'A', 'C');
		}
		else if (i < row)
		{
			special_while(j, col, 'B', 'B');
		}
		else
		{
			fun_while(j, col, 'A', 'C');
		}
		ft_putchar('\n');
		++i;
	}
}
