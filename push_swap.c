#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*t;

	if (valid_args(argc, argv) || create_stack(argc, argv, &stack_a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	t = stack_a;
	printf("BEFORE\n\n");
	while (t)
	{
		printf("%d\n", (t->data));
		t = t->next;
	}
	sort_stack(&stack_a, &stack_b);
	t = stack_a;
	printf("AFTER STACK_A\n\n");
	while (t)
	{
		printf("%d\n", (t->data));
		t = t->next;
	}
	t = stack_b;
	printf("AFTER STACK_B\n\n");
	while (t)
	{
		printf("%d\n", (t->data));
		t = t->next;
	}
	return (0);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*bot_a;
	//t_list	*tmp;
	int	size;

	//tmp = *stack_a;
	size = ft_lstsize(*stack_a);
	push(stack_a, stack_b);
	bot_a = ft_lstlast(*stack_a);
	size--;
	while (size / 2 != 0)
	{
		if ((*stack_a)->data < (*stack_b)->data)
			push(stack_a, stack_b);
		else if ((*stack_a)->data > bot_a->data)
			shift_down(stack_a);
		size--;
	}
}

// int	search_bounds(int *min, int max, t_list *stack)
// {
// 	int	count;

// 	count = 0;
// 	*min = stack->data;
// 	*max = stack->data;
// 	while (stack)
// 	{
// 		if (stack->data > *max)
// 			*max = stack->data;
// 		if (stack->data < *min)
// 			*min = stack->data;
// 		stack = stack->next;
// 		count++;
// 	}
// 	return (count);
// }