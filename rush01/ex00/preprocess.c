/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocess.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 05:01:54 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 06:06:55 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	corner_check(int mat[][6], int size)
{
	int	bools[8];
	int	n;
	int	i;

	n = size - 2;
	i = 0;
	bools[0] = (mat[0][1] == 1) && (mat[1][0] == n);
	bools[1] = (mat[0][1] == n) && (mat[1][0] == 1);
	bools[2] = (mat[0][size - 1] == 1) && (mat[1][size] == n);
	bools[3] = (mat[0][size - 1] == n) && (mat[1][size] == 1);
	bools[4] = (mat[size - 1][0] == 1) && (mat[size][1] == n);
	bools[5] = (mat[size - 1][0] == n) && (mat[size][1] == 1);
	bools[6] = (mat[size][size - 1] == 1) && (mat[size - 1][size] == n);
	bools[7] = (mat[size][size - 1] == n) && (mat[size - 1][size] == 1);
	while (i < 8)
	{
		if (bools[i] || bools[i + 1])
			return (0);
		i += 2;
	}
	return (1);
}

int	preprocessing(int mat[][6])
{
	if (!corner_check(mat, 6))
		return (0);
	return (1);
}
