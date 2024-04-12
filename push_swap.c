#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list *stack_a;
	t_list *stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (valid_args(argc, argv) || create_stack(argc, argv, &stack_a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	sort_stack(&stack_a, &stack_b);
	//print_stack(stack_a);
	return (0);
}

void sort_stack(t_list **stack_a, t_list **stack_b)
{
	t_list *min;
	int		pos;
	int 	size;

	size = ft_lstsize(*stack_a);
	while (size)
	{
		min = search_min(*stack_a, &pos);
		if (pos <= size / 2)
		{
			while (*stack_a && *stack_a != min)
				shift_up(stack_a, "ra\n");
		}
		else
		{
			while (*stack_a && *stack_a != min)
				shift_down(stack_a, "rra\n");
		}
		push(stack_a, stack_b, "pb\n");
		size--;
	}
	while (*stack_b)
		push(stack_b, stack_a, "pa\n");
}

t_list	*search_min(t_list *stack, int *pos)
{
	t_list	*min;
	int		i;

	min = stack;
	i = 0;
	*pos = i;
	while(stack)
	{
		i++;
		if (min->data > stack->data)
		{
			min = stack;
			*pos = i;
		}
		stack = stack->next;
	}
	return (min);
}

void	print_stack(t_list *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}