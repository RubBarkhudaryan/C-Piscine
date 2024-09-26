/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:53:53 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/11 18:42:59 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	comb[5];

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			comb[0] = '0' + (i / 10);
			comb[1] = '0' + (i % 10);
			comb[2] = ' ';
			comb[3] = '0' + (j / 10);
			comb[4] = '0' + (j % 10);
			write(1, comb, 5);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
