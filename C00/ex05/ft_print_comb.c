/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:40:24 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/12 15:37:13 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func_write(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	while (first < '7')
	{
		while (second > first && second <= '8')
		{
			while (third > second && third <= '9')
			{
				func_write(first, second, third);
				++third;
			}
			++second;
			third = second + 1;
		}
		++first;
		second = first + 1;
		third = second + 1;
	}
	write(1, "789", 3);
}
