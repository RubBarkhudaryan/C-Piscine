/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 06:52:17 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 06:52:38 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	solve_2_3_helper1(int mat[][6], int i)
{
	if (mat[i][0] == 3 && mat[i][5] == 2)
		mat[i][3] = 4;
	else if (mat[i][0] == 2 && mat[i][5] == 3)
		mat[i][2] = 4;
	else
		return ;
}

void	solve_2_3_helper2(int mat[][6], int i)
{
	if (mat[0][i] == 3 && mat[5][i] == 2)
		mat[3][i] = 4;
	else if (mat[0][i] == 2 && mat[5][1] == 3)
		mat[2][i] = 4;
	else
		return ;
}

void	solve_2_3(int mat[][6])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		solve_2_3_helper1(mat, i);
		solve_2_3_helper2(mat, i);
		++i;
	}
}
