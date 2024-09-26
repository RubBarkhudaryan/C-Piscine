/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:47:35 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/12 17:01:36 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (*b == 0)
		return ;
	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
