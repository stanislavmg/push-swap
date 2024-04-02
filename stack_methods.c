#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(stack))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next
	(*stack)->next = tmp;
}

void	push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!stack_b || !*stack_b || !stack_b || !*stack_b)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	stack_b = stack_a;
	*stack_a = tmp;
}	

void	shift_up(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(stack))
		return ;
	tmp = *stack;
	*stack = ft_lstlast(*stack);
	if (!*stack)
		return ;
	(*stack)->next = tmp;
	while (tmp->next != *stack)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	shift_down(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(stack))
		return ;
	tmp = ft_lstlast(*stack);
	tmp->next = *stack;
	*stack = (*stack)->next;
	(*stack)->next = NULL;
}