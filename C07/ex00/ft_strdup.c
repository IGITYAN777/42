/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:51:43 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/24 22:12:19 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		++i;
	dest = (char *)malloc(i * sizeof(char));
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		++j;
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char ptr[] = "abcd";
	char *arr = ft_strdup(ptr);
	int i = 0;
	while(arr[i] != '\0')
	{
		write(1, &arr[i], 1);
		++i;
	}
}*/
