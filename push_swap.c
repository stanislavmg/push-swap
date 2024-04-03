#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (valid_args(argc, argv) || create_stack(argc, argv, &stack_a))
	{
		write(2, "Error", 5);
		return (1);
	}
	return (0);
}