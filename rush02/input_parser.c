/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarnach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:26:00 by lvarnach          #+#    #+#             */
/*   Updated: 2024/09/22 23:29:18 by lvarnach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	minus_count(char **str)
{
	int	count;

	count = 0;
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			++count;
		++*str;
	}
	return (count);
}

void	ignore_spaces(char **str)
{
	while ((**str >= 9 && **str <= 13) || **str == 32)
		++*str;
}

int	count_length(char **str)
{
	int	i;

	i = 0;
	while (**str >= '0' && **str <= '9')
	{
		++*str;
		i++;
	}
	return (i);
}

int	is_arg_valid(char **key)
{
	int		len;
	int		i;
	char	*str;
	char	*start;

	str = *key;
	ignore_spaces(&str);
	if (minus_count(&str) % 2 == 1)
		return (0);
	start = str;
	len = count_length(&str);
	if (len == 0)
		return (0);
	*key = (char *)malloc(len + 1);
	if (!*key)
		return (0);
	i = -1;
	while (++i < len)
		(*key)[i] = start[i];
	(*key)[len] = '\0';
	return (1);
}
