/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 03:06:21 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/16 04:48:54 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ca)
{
	char			*tracker;
	unsigned char	c;
	char			*strcasted;

	c = (unsigned char)ca;
	strcasted = (char *)str;
	tracker = NULL;
	while (*strcasted || c == '\0')
	{
		if (*strcasted == c)
		{
			tracker = (char *)strcasted;
			if (!*strcasted)
				break ;
		}
		strcasted++;
	}
	return (tracker);
}
