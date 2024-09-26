/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 06:51:07 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 18:21:03 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_col(int mat[][6], int i)
{
	int	count;

	count = 1;
	if (mat[i][0] == 4)
	{
		while (count < 5)
		{
			mat[i][count] = count;
			++count;
		}
	}
	else
	{
		count = 4;
		while (count > 0)
		{
			mat[i][count] = count;
			--count;
		}
	}
}

void	write_rows(int mat[][6], int i)
{
	int	count;

	count = 1;
	if (mat[0][i] == 4)
	{
		while (count < 5)
		{
			mat[count][i] = count;
			++count;
		}
	}
	else
	{
		count = 4;
		while (count > 0)
		{
			mat[count][i] = count;
			--count;
		}
	}
}

void	solve_1_4_helper1(int mat[][6], int i)
{
	if (mat[i][0] == 4 || mat[i][5] == 4)
		write_col(mat, i);
	else if (mat[i][0] == 1)
		mat[i][1] = 4;
	else if (mat[i][5] == 1)
		mat[i][4] = 4;
	else
		return ;
}

void	solve_1_4_helper2(int mat[][6], int i)
{
	if (mat[0][i] == 4 || mat[5][i] == 4)
		write_rows(mat, i);
	else if (mat[0][i] == 1)
		mat[1][i] = 4;
	else if (mat[i][5] == 1)
		mat[4][i] = 4;
	else
		return ;
}

void	solve_1_4(int mat[][6])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		solve_1_4_helper1(mat, i);
		solve_1_4_helper2(mat, i);
		++i;
	}
}
