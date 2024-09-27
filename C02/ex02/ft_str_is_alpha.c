/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ligityan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:51:17 by ligityan          #+#    #+#             */
/*   Updated: 2024/09/10 17:01:33 by ligityan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		if ('a' <= str[len] && str[len] <= 'z')
		{
			++i;
		}
		else if ('A' <= str[len] && str[len] <= 'Z')
		{
			++i;
		}
		++len;
	}
	if (i == len)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
