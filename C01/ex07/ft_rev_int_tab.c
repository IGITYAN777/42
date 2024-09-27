/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:15:52 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/09 15:26:34 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	tmp;

	count = 0;
	while (count < size / 2)
	{
		tmp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = tmp;
		++count;
	}
}
