#include "push_swap.h"

void	swap(stack **list)
{
	stack	*tmp;

	tmp = NULL;
	if (!list || !*list || 2 > stack_size(list))
		return ;
	tmp = *list;
	*list = (*list)->next;
	tmp->next = (*list)->next
	(*list)->next = tmp;
}

void	push(stack **list)
{
	
}

void	ra()
{
	return (0);
}

void	rb()
{
	return (0);
}

void	rr()
{
	return (0);
}

void	rra()
{
	return (0);
}

void	rrb()
{
	return (0);
}

void	rrr()
{
	return (0);
}