/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:39:32 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/05/19 15:39:33 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int num)
{
	t_list	*ps;

	ps = malloc(sizeof(t_list));
	if (!ps)
		return (NULL);
	ps->data = num;
	ps->next = NULL;
	return (ps);
}
