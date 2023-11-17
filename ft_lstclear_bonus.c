/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:51:06 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/16 07:09:33 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (lst && del)
	{
		while (*lst)
		{
			next_node = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = next_node;
		}
		lst = NULL;
	}
}
