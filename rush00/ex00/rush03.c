/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:53:08 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/08 13:38:34 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	row(char first, char mid, char end, int length);

void	row(char first, char mid, char end, int length)
{
	int	j;

	ft_putchar(first);
	j = 0;
	while (j < length - 2)
	{
		ft_putchar(mid);
		j++;
	}
	if (length > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int cols, int rows)
{
	int	i;

	if (cols == 0 || rows == 0)
		return ;
	i = 0;
	while (i < rows)
	{
		if (i == 0 || i == (rows - 1))
		{
			row('A', 'B', 'C', cols);
		}
		else
		{
			row('B', ' ', 'B', cols);
		}
		i++;
	}
}
