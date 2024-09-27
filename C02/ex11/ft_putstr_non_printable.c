/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:45:48 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/16 16:01:32 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(32 <= str[i] && str[i] <= 126))
		{
			ft_putchar('\\');
			hex[0] = "0123456789abcdef"[(*str >> 4) & 0x0F];
			hex[1] = "0123456789abcdef"[*str & 0x0F];
			ft_putchar(hex[0]);
			ft_putchar(hex[1]);
		}
		else
		{
			ft_putchar(*str);
		}
		++str;
	}
}

/*int main()
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}*/
