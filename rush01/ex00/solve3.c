/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:39:10 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 19:53:19 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	solve_1_2_helper1(int mat[][6], int i)
{
	if (mat[i][0] == 1 && mat[i][5] == 2)
		mat[i][4] = 3;
	else if (mat[i][0] == 2 && mat[i][0] == 1)
		mat[i][1] = 3;
	return ;
}

void	solve_1_2_helper2(int mat[][6], int i)
{
	if (mat[0][i] == 1 && mat[5][i] == 2)
		mat[4][i] = 3;
	else if (mat[0][i] == 2 && mat[0][i] == 1)
		mat[1][i] = 3;
	return ;
}

void	solve_1_2(int mat[][6])
{
	int	i;

	i = 0;
	while (i < 5)
	{
		solve_1_2_helper1(mat, i);
		solve_1_2_helper2(mat, i);
		++i;
	}
}
