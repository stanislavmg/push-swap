#include "push_swap.h"

void create_stack(t_list **stack_a, int *arr, int size)
{
	int i;

	i = -1;
	while (++i < size)
		ft_lstadd_back(stack_a, ft_lstnew(arr[i]));
}

int	*create_array(int argc, char **argv, int count)
{
	int		*rval;
	int 	i;
	int		j;

	i = 1;
	j = 0;
	printf("count = %d\n",count);
	rval = (int *)malloc(sizeof(int) * count);
	if (!rval)
	{
		write(2, "NO MEMORY!\n", 11);
		exit(EXIT_FAILURE);
	}
	while (i < argc)
	{
		while (argv[i][0] && j < count)
		{	
			argv[i] = ft_atoi(argv[i], rval + j);
			j++;
		}
		i++;
	}
	return (rval);
}