/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:13:01 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/25 17:30:59 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (i < n)
	{
		if (n % i == 0 && n != i)
			return (0);
		++i;
	}
	return (1);
}

int	ft_find_next_prime(int n)
{
	if (ft_is_prime(n))
		return (n);
	while (!ft_is_prime(n))
		++n;
	return (n);
}
