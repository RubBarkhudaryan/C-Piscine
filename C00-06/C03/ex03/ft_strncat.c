/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:48:37 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 16:48:37 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int num);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int num)
{
	int				len2;
	unsigned int	i;

	i = 0;
	len2 = ft_strlen(dest);
	while (src[i] && i < num)
	{
		dest[len2] = src[i];
		++len2;
		++i;
	}
	dest[len2] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char *str = "world";
	char dest[10] = "hello";

	printf("%s \n", ft_strncat(dest, str, 2));
}
*/