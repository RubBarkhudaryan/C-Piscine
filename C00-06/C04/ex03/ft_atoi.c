/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:19:14 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/20 13:19:14 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	minus_count;

	i = 0;
	sign = 1;
	result = 0;
	minus_count = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus_count % 2 == 1)
		sign = -1;
	return (result * sign);
}

/*
#include <stdio.h>
int main()
{
	char *str1 = "   45221";
	char *str2 = "--45221";
	char *str3 = "-45221";
	char *str4 = "+42";
	char *str5 = "    --+42";
	char *str6 = "42abc56";

	printf("str1 = %d\n", ft_atoi(str1));
	printf("str2 = %d\n", ft_atoi(str2));
	printf("str3 = %d\n", ft_atoi(str3));
	printf("str4 = %d\n", ft_atoi(str4));
	printf("str5 = %d\n", ft_atoi(str5));
	printf("str6 = %d\n", ft_atoi(str6));
}
*/