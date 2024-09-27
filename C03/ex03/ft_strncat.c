/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:13:21 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/22 20:04:13 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	char			*t;

	a = 0;
	t = dest;
	while (*t != '\0')
		++t;
	while (a < nb && *src != '\0')
	{
		*t++ = *src++;
		++a;
	}
	*t = '\0';
	return (dest);
}

/*int main()
{
	char arr[] = "ab";
	char brr[] = "cd";
	printf("%s", ft_strncat(arr, brr, 2));
}*/
