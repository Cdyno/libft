/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:06:21 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/14 09:06:28 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*currnode;
	t_list	*nextnode;

	if (lst && f)
	{
		nextnode = lst;
		while (nextnode)
		{
			currnode = nextnode;
			nextnode = currnode-> next;
			f(currnode-> content);
		}
	}
}
