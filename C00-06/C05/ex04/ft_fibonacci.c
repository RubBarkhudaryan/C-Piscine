/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:01:46 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 15:15:56 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main()
{
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(0));
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(3));
	printf("%d \n", ft_fibonacci(2));
	printf("%d \n", ft_fibonacci(10));
	printf("%d \n", ft_fibonacci(6));
}
*/
