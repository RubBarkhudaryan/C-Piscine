/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:37:26 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/19 15:59:25 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}
