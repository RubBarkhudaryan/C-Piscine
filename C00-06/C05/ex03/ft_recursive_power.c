/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:50:42 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 14:56:01 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int power);

int	ft_recursive_power(int n, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (n * ft_recursive_power(n, --power));
}

/*
#include <stdio.h>
int main()
{
	printf("%d \n", ft_recursive_power(2, 2));
	printf("%d \n", ft_recursive_power(0, 0));
	printf("%d \n", ft_recursive_power(2, 0));
	printf("%d \n", ft_recursive_power(3, 0));
	printf("%d \n", ft_recursive_power(2, 5));
	printf("%d \n", ft_recursive_power(10, 3));
	printf("%d \n", ft_recursive_power(6, 2));
}
*/
