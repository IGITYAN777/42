/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:07:46 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/20 15:34:57 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr;

	ptr = dest;
	while (n > 0 && *src)
	{
		*dest++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (ptr);
}
/*int main() {
  char str1[] = "Hello World!";
  char str2[] = "Write code!";
  ft_strncpy(str1, str2, 1);
  printf("%s\n", str1);
  return 0;
}*/
