/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:28:13 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/18 14:43:29 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s1;
	char	*s2;
	char	*start;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		start = str;
		s1 = str;
		s2 = to_find;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (start);
		}
		str++;
	}
	return (0);
}

/*int main() {
    char arr[] = "barlustaaaa";
    char brr[] = "lust";
    char *result = ft_strstr(arr, brr);

    if (result) {
        write(1, result, 4);
    } else {
        write(1, "Not found", 9);
    }

    return 0;
}*/
