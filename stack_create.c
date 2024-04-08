#include "push_swap.h"

int create_stack(int argc, char **argv, t_list **stack_a)
{
	int i;
	int num;

	i = 1;
	while (i < argc)
	{
		while (argv[i][0])
		{	
			argv[i] = ft_atoi(argv[i], &num);
			ft_lstadd_back(stack_a, ft_lstnew(num));
		}
		i++;
	}
	return (0);
}