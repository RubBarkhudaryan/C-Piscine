/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 05:36:10 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 22:31:41 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	solve_1_4(int mat[][6]);
void	solve_2_3(int mat[][6]);
void	solve_1_2(int mat[][6]);
void	get_coordinate(int mat[][6], int nb);
int		sum_count(int mat[][6], int nb);
void	solve_5(int mat[][6]);

void	solve_puzzle(int mat[][6])
{
	solve_1_4(mat);
	solve_2_3(mat);
	solve_1_2(mat);
	if (sum_count(mat, 1))
		get_coordinate(mat, 1);
	if (sum_count(mat, 2))
		get_coordinate(mat, 2);
	if (sum_count(mat, 3))
		get_coordinate(mat, 3);
	if (sum_count(mat, 4))
		get_coordinate(mat, 4);
	solve_5(mat);
}
