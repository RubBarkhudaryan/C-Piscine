/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:48:37 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 19:23:34 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	char *str = "hello";
	char dest[10] = "Hello";
	printf("%d \n", ft_strncmp(dest, str, 3));
}
*/