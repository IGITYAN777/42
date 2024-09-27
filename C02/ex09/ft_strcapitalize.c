/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:20:43 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/20 16:29:39 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	check_char(char p)
{
	int	a;

	a = 0;
	if ('A' <= p && p <= 'Z')
		++a;
	else if ('a' <= p && p <= 'z')
		++a;
	else if ('0' <= p && p <= '9')
		++a;
	if (a)
		return (1);
	return (0);
}

char	to_upper(char a)
{
	if ('a' <= a && a <= 'z')
		a -= 32;
	return (a);
}

char	to_lower(char a)
{
	if ('A' <= a && a <= 'Z')
		a += 32;
	return (a);
}

char	*ft_strcapitalize(char *str)
{
	int	in_word;
	int	i;

	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (check_char(str[i]))
		{
			if (!in_word)
			{
				str[i] = to_upper(str[i]);
				in_word = 1;
			}
			else
				str[i] = to_lower(str[i]);
		}
		else
			in_word = 0;
		++i;
	}
	return (str);
}

/*int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}*/
