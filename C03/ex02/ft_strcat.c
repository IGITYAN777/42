/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:37:31 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/17 18:12:56 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		++a;
	while (src[b] != '\0' )
	{
		dest[a] = src[b];
		++a;
		++b;
	}
	dest[a] = '\0';
	return (dest);
}

/*int main()
{
	char arr[] = "";
	char brr[] = "dsasd";
	ft_strcat(arr, brr);
	printf("%s", arr);
}*/
