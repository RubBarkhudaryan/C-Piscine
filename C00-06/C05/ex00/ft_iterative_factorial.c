/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:49:29 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 14:39:04 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n);

int	ft_iterative_factorial(int n)
{
	int	i;
	int	res;

	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (1);
	i = 1;
	res = 1;
	while (i <= n)
	{
		res *= i;
		++i;
	}
	return (res);
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(3));
}
*/
