/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 03:45:10 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/18 19:52:35 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
		while (src[i])
			++i;
	}
	return (i);
}
