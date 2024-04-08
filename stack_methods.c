#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(*stack))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	push(t_list **stack, t_list *node)
{
	if (!node || !stack || !*stack)
		return ;
	ft_lstadd_front(stack, node);
}

void	shift_up(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(*stack))
		return ;
	tmp = ft_lstlast(*stack);
	ft_lstadd_front(stack, tmp);
	tmp = tmp->next;
	while (tmp->next != *stack)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	shift_down(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(*stack))
		return ;
	tmp = ft_lstlast(*stack);
	ft_lstadd_back(stack, *stack);
	*stack = (*stack)->next;
	tmp->next->next = NULL;
}