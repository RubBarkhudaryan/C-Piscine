/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 03:12:06 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/17 03:12:06 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isalpa(char c);
char	*ft_strcapitalize(char *str);

int	isalpa(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_start;

	is_start = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (isalpa(str[i]))
		{
			if (is_start && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!is_start && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			is_start = 0;
		}
		else if ((str[i] >= '0' && str[i] <= '9'))
			is_start = 0;
		else
			is_start = 1;
		++i;
	}
	return (str);
}
