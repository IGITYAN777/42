/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:01:51 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/16 15:45:19 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*d;
	char	*e;
	char	*s;

	d = dest;
	e = dest + size;
	s = src;
	while (*s != '\0' && d < e)
		*d++ = *s++;
	if (d < e)
		*d = 0;
	else if (size > 0)
		d[-1] = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}

/*int main()
{
	char a[5] = {'a', 'b', 'c'};
	char b[7] = {'e', 'f', 'g', 'h', 'j'};
	printf("%u", ft_strlcpy(a, b, 15));
}*/
