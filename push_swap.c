/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoremyk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:38:06 by sgoremyk          #+#    #+#             */
/*   Updated: 2024/05/19 15:38:07 by sgoremyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		*arr;
	int		count;

	arr = NULL;
	stack_a = NULL;
	stack_b = NULL;
	count = 0;
	if (valid_args(argc, argv, &count, &arr))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	create_stack(&stack_a, arr, count);
	sort_array(arr, count);
	if (count > 5)
		sort_stack(&stack_a, &stack_b, arr, count);
	else
		small_sort(&stack_a, &stack_b, arr, count);
	free(arr);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

void	exit_failure(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
