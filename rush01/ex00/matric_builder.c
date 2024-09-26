/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matric_builder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:05:53 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 19:50:42 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	filling(int mat[][6], char *hint);
int		preprocessing(int mat[][6]);
void	solve_puzzle(int mat[][6]);		

void	print_deskboard(int mat[][6])
{
	int		cols;
	int		rows;
	char	letter;

	cols = 1;
	while (cols < 5)
	{
		rows = 1;
		while (rows < 5)
		{
			letter = mat[cols][rows] + '0';
			write(1, &letter, 1);
			write(1, " ", 1);
			++rows;
		}
		write(1, "\n", 1);
		++cols;
	}
}

int	matric_builder(char *hint)
{
	int	matric[6][6];

	filling(matric, hint);
	if (preprocessing(matric))
	{
		solve_puzzle(matric);
		print_deskboard(matric);
	}
	else
		return (1);
	return (0);
}
