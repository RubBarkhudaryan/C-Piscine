/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:46:44 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 14:49:59 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int power);

int	ft_iterative_power(int n, int power)
{
	int	num;

	num = n;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		n *= num;
		--power;
	}
	return (n);
}

/*
#include <stdio.h>
int main()
{
	printf("%d \n", ft_iterative_power(2, 2));
	printf("%d \n", ft_iterative_power(0, 0));
	printf("%d \n", ft_iterative_power(2, 0));
	printf("%d \n", ft_iterative_power(3, 0));
	printf("%d \n", ft_iterative_power(2, 5));
	printf("%d \n", ft_iterative_power(10, 3));
	printf("%d \n", ft_iterative_power(6, 2));
}
*/
