/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:22:28 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 22:35:56 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	numbers_count_y(int mat[][6], int y)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (i <= 4)
	{
		if (mat[y][i] != 0)
			++count;
		++i;
	}
	return (count == 3);
}

int	numbers_count_x(int mat[][6], int x)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (i <= 4)
	{
		if (mat[i][x] != 0)
			++count;
		++i;
	}
	return (count == 3);
}

void	set_for_cols(int mat[][6], int x)
{
	int	array[3];

	array[0] = 1;
	array[1] = 10;
	array[2] = 10;
	while (array[0] <= 4)
	{
		if (mat[x][array[0]] != 0)
		{
			array[1] -= array[0];
			array[2] -= mat[x][array[0]];
		}
		++array[0];
	}
	mat[x][array[1]] = array[2];
}

void	set_for_rows(int mat[][6], int y)
{
	int	array[3];

	array[0] = 1;
	array[1] = 10;
	array[2] = 10;
	while (array[0] <= 4)
	{
		if (mat[array[0]][y] != 0)
		{
			array[1] -= array[0];
			array[2] -= mat[array[0]][y];
		}
		++array[0];
	}
	mat[array[1]][y] = array[2];
}

void	solve_5(int mat[][6])
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (numbers_count_x(mat, i))
			set_for_rows(mat, i);
		++i;
	}
	i = 1;
	while (i <= 4)
	{
		if (numbers_count_y(mat, i))
			set_for_cols(mat, i);
		++i;
	}
	i = 1;
	while (i <= 4)
	{
		if (numbers_count_x(mat, i))
			set_for_rows(mat, i);
		++i;
	}
}
