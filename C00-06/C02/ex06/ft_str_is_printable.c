/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 02:15:00 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/18 18:58:17 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	decimal;

	i = 0;
	while (str[i] != '\0')
	{
		decimal = (int)str[i];
		if (!(decimal >= 32 && decimal <= 126))
			return (0);
		++i;
	}
	return (1);
}
