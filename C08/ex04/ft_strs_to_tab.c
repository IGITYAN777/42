/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:11:52 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/26 17:30:58 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*res;

	size = 0;
	while (src[size])
		size++;
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	size = 0;
	while (src[size])
	{
		res[size] = src[size];
		++size;
	}
	res[size] = '\0';
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*res;
	int					i;

	i = 0;
	res = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].copy = ft_strdup(av[i]);
		res[i].str = av[i];
	}
	res[i].str = 0;
	return (res);
}
