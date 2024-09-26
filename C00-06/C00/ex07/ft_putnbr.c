/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:33:05 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/11 20:34:30 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		counter;
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	counter = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / counter >= 10)
	{
		counter *= 10;
	}
	while (nb)
	{
		printf("%d \n", nb);
		digit = '0' + (nb / counter);
		write(1, &digit, 1);
		nb = nb - (nb * (nb / counter));
		printf("%d \n", nb);
		printf("\n\n");
		counter /= 10;
	}
}

int main()
{
	ft_putnbr(42);
	ft_putnbr(10);
	ft_putnbr(-45);
	return 0;
}
