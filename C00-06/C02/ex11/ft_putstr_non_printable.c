/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 04:07:12 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 16:00:18 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	decimal;
	char			hex[3];

	i = 0;
	while (str[i] != '\0')
	{
		decimal = (unsigned char)str[i];
		if (decimal >= 32 && decimal <= 126)
			write(1, &str[i], 1);
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[decimal / 16];
			hex[2] = "0123456789abcdef"[decimal % 16];
			write(1, hex, 3);
		}
		++i;
	}
}
