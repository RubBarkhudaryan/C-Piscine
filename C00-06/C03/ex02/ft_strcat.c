/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:02:31 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 19:22:56 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len2;

	i = 0;
	len2 = ft_strlen(dest);
	while (src[i])
	{
		dest[len2] = src[i];
		++i;
		++len2;
	}
	dest[len2] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char *str = "hello";
	char dest[10] = "Hello";
	printf("%d \n", ft_strcat(dest, str));
}
*/