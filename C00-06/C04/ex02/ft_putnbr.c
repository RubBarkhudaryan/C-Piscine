/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 02:17:30 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/20 02:17:30 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);
int		checker(int n);
int		ft_degree(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checker(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	return (1);
}

int	ft_degree(int n)
{
	int	deg;

	deg = 1;
	while (n / deg >= 10)
		deg *= 10;
	return (deg);
}

void	ft_putnbr(int n)
{
	int		degree;
	char	decimal;

	if (checker(n))
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n *= -1;
		}
		degree = ft_degree(n);
		while (degree)
		{
			decimal = (n / degree) + '0';
			n %= degree;
			degree /= 10;
			ft_putchar(decimal);
		}
	}
}

/*
int	main(void)
{
	ft_putnbr(-2147483648);  // Minimum int value
	ft_putnbr(2147483647);   // Maximum int value

	ft_putnbr(0);            // Zero
	ft_putnbr(-1);           // Small negative
	ft_putnbr(-100);         // Larger negative
	ft_putnbr(-2147483647);  // Large negative, but not the smallest

	ft_putnbr(1);            // Small positive
	ft_putnbr(42);           // Medium positive
	ft_putnbr(100);          // Power of 10
	ft_putnbr(999);          // Almost 1000
	ft_putnbr(1000);         // Exactly 1000
	
	return (0);
}
*/