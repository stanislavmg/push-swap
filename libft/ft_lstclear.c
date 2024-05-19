/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:39:26 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/05/19 15:39:27 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*t;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		free(*lst);
		*lst = t;
	}
	*lst = NULL;
}
