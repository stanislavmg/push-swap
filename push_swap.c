#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	(void)stack_b;
	if (valid_args(argc, argv) || create_stack(argc, argv, &stack_a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	while (stack_a)
	{
		printf("%d\n", (stack_a->data));
		stack_a = stack_a->next;
	}
	return (0);
}

// void	sort_stack(t_list **stack_a, t_list **stack_b)
// {
// 	int	min_a;
// 	int	max_b;
// 	t_list	*tmp;

// 	max_b = 0;
// 	min_a = stack_a->content;
// 	tmp = *stack_a;
// 	while ()
// }