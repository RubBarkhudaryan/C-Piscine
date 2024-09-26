/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saslanya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:29:01 by saslanya          #+#    #+#             */
/*   Updated: 2024/09/15 22:29:39 by saslanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum_count(int mat[][6], int nb)
{
	int	count;
	int	y;
	int	x;

	y = 1;
	count = 0;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			if (mat[y][x] == nb)
			{
				++count;
				break ;
			}
			++x;
		}
		++y;
	}
	return (count == 3);
}

void	get_coordinate(int mat[][6], int nb)
{
	int	array[5];

	array[0] = 10;
	array[1] = 10;
	array[3] = 1;
	while (array[3] <= 4)
	{
		array[4] = 1;
		while (array[4] <= 4)
		{
			if (mat[array[3]][array[4]] == nb)
			{
				array[0] -= array[3];
				array[1] -= array[4];
			}
			++array[4];
		}
		++array[3];
	}
	mat[array[0]][array[1]] = nb;
}
