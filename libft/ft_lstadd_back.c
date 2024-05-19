/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:39:20 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/05/19 15:39:21 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ps;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ps = ft_lstlast(*lst);
	ps -> next = new;
}
