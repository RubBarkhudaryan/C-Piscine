/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matric_fill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 04:29:52 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 04:51:22 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	filling_matric_4x4(int mat[][6])
{
	int	cols;
	int	rows;

	cols = 0;
	while (cols < 6)
	{
		rows = 0;
		while (rows < 6)
		{
			mat[cols][rows] = 0;
			++rows;
		}
		++cols;
	}
}

char	*colwrite(int mat[][6], int y, char *hint)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		mat[y][i] = *hint - '0';
		hint += 2;
		++i;
	}
	return (hint);
}

char	*rowwrite(int mat[][6], int x, char *hint)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		mat[i][x] = *hint - '0';
		++i;
		if (i == 5 && x == 5)
			break ;
		hint += 2;
	}
	return (hint);
}

void	filling(int matric[][6], char *hint)
{
	filling_matric_4x4(matric);
	hint = colwrite(matric, 0, hint);
	hint = colwrite(matric, 5, hint);
	hint = rowwrite(matric, 0, hint);
	rowwrite(matric, 5, hint);
}
