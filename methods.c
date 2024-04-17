#include "push_swap.h"

void	push(t_list **from, t_list **in, const char *str)
{
	t_list	*tmp;

	if (!from || !*from)
		return ;
	tmp = *from;
	*from = (*from)->next;
	ft_lstadd_front(in, tmp);
	ft_putstr(str);
}

void	shift_down(t_list **stack, const char *str)
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
	ft_putstr(str);
}

void	shift_up(t_list **stack, const char *str)
{
	t_list	*tmp;

	if (!stack || !*stack || 2 > ft_lstsize(*stack))
		return ;
	ft_lstadd_back(stack, *stack);
	tmp = (*stack)->next;
	(*stack)->next = NULL;
	*stack = tmp;
	ft_putstr(str);
}