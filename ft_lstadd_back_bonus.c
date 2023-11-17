/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmohame <olmohame@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 06:41:10 by olmohame          #+#    #+#             */
/*   Updated: 2023/11/15 02:41:14 by olmohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newnode)
{
	t_list	*lastnode;

	if (!*lst)
		*lst = newnode;
	else
	{
		lastnode = ft_lstlast(*lst);
		lastnode -> next = newnode;
	}
}
