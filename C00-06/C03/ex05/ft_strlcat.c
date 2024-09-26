/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:29:25 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 21:19:39 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int num);

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len2;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	len2 = ft_strlen(dest);
	i = 0;
	while (src[i] && i < size - len2 - 1)
	{
		dest[len2 + i] = src[i];
		++i;
	}
	dest[len2 + i] = '\0';
	return (len2 + ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "world";
	char dest[6] = "hello";
	printf("%s \n %u \n", dest, ft_strlcat(dest, str, 2));
}
*/
