/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:52:26 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/25 16:18:53 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	int		j;
	char	*ptr;

	ptr = (char *)malloc(sizeof(strs) + sizeof(sep));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			ptr[k++] = str[i][j++];
		}
		j = 0;
		while (sep[j] != '\0')
		{
			ptr[k++] = sep[j++];
		}
		++i;
	}
	ptr[k] = '\0';
	return (ptr);
}
