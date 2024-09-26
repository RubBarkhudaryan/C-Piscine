/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 20:56:24 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/24 21:48:23 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n);

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	if (n == 0 || n == 1)
		return (1);
	return (n * ft_recursive_factorial(n - 1));
}

/*
#include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(3));
}
*/
