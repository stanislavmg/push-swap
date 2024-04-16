#include "push_swap.h"

void	print_stack(t_list *stack)
{
	while (stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_list 	*stack_a;
	t_list 	*stack_b;
	//int i = -1;
	int		*arr;
	int		count;

	arr = NULL;
	count = 0;
	if (valid_args(argc, argv, &count, &arr))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	create_stack(&stack_a, arr, count);
	sort_stack(&stack_a, &stack_b, arr, count);
	//while (++i < count)
	//	printf("%d ", arr[i]);
	//printf("\n==============================\n\n");
	//print_stack(stack_a);
	free(arr);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}
