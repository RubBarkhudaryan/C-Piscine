/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:59:49 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/18 16:45:40 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	ind;
	int	temp;

	if (size <= 1)
		return ;
	ind = 0;
	size--;
	while (ind <= (size / 2))
	{
		temp = tab[ind];
		tab[ind] = tab[size - ind];
		tab[size - ind] = temp;
		ind++;
	}
}
