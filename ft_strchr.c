/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:05:51 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/16 04:48:18 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ca)
{
	unsigned char	c;
	char			*strcasted;

	c = (unsigned char)ca;
	strcasted = (char *)str;
	while (*strcasted || c == '\0')
	{
		if (*strcasted == c)
			return ((char *)strcasted);
		strcasted++;
	}
	return (0);
}
