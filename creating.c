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
	rval = (int *)malloc(sizeof(int) * count);
	if (!rval)
	{
		write(2, "NO MEMORY!\n", 11);
		exit(EXIT_FAILURE);
	}
	while (i < argc)
	{
		argv[i] = skip_spaces(argv[i]);
		while (argv[i][0])
		{
			argv[i] = ft_atoi(argv[i], rval + j);
			argv[i] = skip_spaces(argv[i]);
			j++;
		}
		i++;
	}
	return (rval);
}

void	small_sort(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	if (size <= 3)
		three_sort(stack_a);
	else
		five_sort(stack_a, stack_b, arr, size);
	three_sort(stack_a);
	push(stack_b, stack_a, "pa\n");
	push(stack_b, stack_a, "pa\n");
}

void	five_sort(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	int		pos;
	int		i;
	t_list	*t;

	i = 0;
	while (i < 2)
	{
		t = get_position(*stack_a, arr[i], &pos);
		if (pos < size / 2)
		{
			while (t != *stack_a)
				shift_up(stack_a, "ra\n");
		}
		else
		{
			while (t != *stack_a)
				shift_down(stack_a, "rra\n");
		}
		push(stack_a, stack_b, "pb\n");
		i++;
	}
}

void	three_sort(t_list **stack_a)
{
	int	i;

	i = 0;
	while (check_order(*stack_a))
	{
		if ((*stack_a)->data > ft_lstlast(*stack_a)->data)
			shift_up(stack_a, "ra\n");
		else if ((*stack_a)->data > (*stack_a)->next->data)
			swap(stack_a, "sa\n");
		else if ((*stack_a)->next->data > ft_lstlast(*stack_a)->data)
			shift_down(stack_a, "rra\n");
		i++;
	}
}

int	check_order(t_list *stack)
{
	int	t;

	while (stack->next)
	{
		t = stack->data;
		if (t > stack->next->data)
			return (1);
		stack = stack->next;
	}
	return (0);
}