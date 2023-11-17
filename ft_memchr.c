/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:21:13 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/16 03:41:21 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*strcasted;
	unsigned char	ccasted;

	strcasted = (unsigned char *)str;
	ccasted = (unsigned char)c;
	while (n)
	{
		if (*strcasted == ccasted)
		{
			return ((void *)strcasted);
		}
		n--;
		strcasted++;
	}
	return (0);
}
