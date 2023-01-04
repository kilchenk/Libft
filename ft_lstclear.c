/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:49:30 by kilchenk          #+#    #+#             */
/*   Updated: 2023/01/01 22:49:30 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!lst && !del && !*lst)
	{
		return (NULL);
	}

	while (*lst && del)
	{
		i = (*lst)->next;
		ft_lstdelone(*lst);
		*lst = i;
	}
}
