/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:16:46 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 18:32:58 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	matric_builder(char *hint);

void	error(void)
{
	char	*err;

	err = "ERROR !";
	while (*err)
	{
		write(1, err, 1);
		++err;
	}
	write(1, "\n", 1);
}

int	check_argv(char *input)
{
	int	count;

	count = 0;
	while (*input)
	{
		if (*input >= '1' && *input <= '4')
		{
			++count;
			++input;
			if (*input && (*input == ' ' || *input == '\t'))
				++input;
		}
		else
			return (0);
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	dashboardsize;

	if (argc == 2)
	{
		dashboardsize = check_argv(argv[1]);
		if (dashboardsize != 16)
		{
			error();
			return (2);
		}
		if (matric_builder(argv[1]))
			return (0);
	}
	else
	{
		error();
		return (1);
	}
}
