/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:42:29 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 22:53:31 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **str, int arg_c)
{
	int	i;
	int	j;

	i = 1;
	while (i < arg_c)
	{
		j = 0;
		while (str[i][j])
		{
			write(1, &str[i][j], 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		++i;
	}
	return (0);
}

int	main(int arg_c, char **arg_v)
{
	int		i;
	int		j;
	char	*temp;

	if (arg_c >= 3)
	{
		i = 1;
		while (i < arg_c - 1)
		{
			j = i + 1;
			while (j <= arg_c - 1)
			{
				if (ft_strcmp(arg_v[j], arg_v[i]) < 0)
				{
					temp = arg_v[i];
					arg_v[i] = arg_v[j];
					arg_v[j] = temp;
				}
				++j;
			}
			++i;
		}
	}
	ft_putstr(arg_v, arg_c);
	return (0);
}
