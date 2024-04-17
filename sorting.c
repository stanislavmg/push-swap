#include "push_swap.h"

void sort_array(int *arr, int size)
{
	int	i;
	int j;
	int t;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			j++;
		}
		i++;
	}
}

void sort_stack(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	int n;
	int i;

	i = 0;
	n = ft_log(size) + ft_sqrt(size);
	sort_array(arr, size);
	while (*stack_a && i < size)
	{
		while (n + i >= size - 1)
			n--;
		if ((*stack_a)->data <= arr[i])
		{
			push(stack_a, stack_b, "pb\n");
			shift_up(stack_b, "rb\n");
			i++;
		}
		else if ((*stack_a)->data <= arr[i + n])
		{
			push(stack_a, stack_b, "pb\n");
			i++;
		}
		else
			shift_up(stack_a, "ra\n");
	}
	finish_sort(stack_a, stack_b, arr, size);
}

void	finish_sort(t_list **stack_a, t_list **stack_b, int *arr, int size)
{
	int	i;
	int pos;
	t_list	*max;

	i = size - 1;
	max = NULL;
 	while (*stack_b)
	{
		max = get_position(*stack_b, arr[i], &pos);
		if (pos < i / 2)
		{
			while (*stack_b != max)
				shift_up(stack_b, "rb\n");
			push(stack_b, stack_a, "pa\n");
			i--;
		}
		else
		{
			while (*stack_b != max)
				shift_down(stack_b, "rrb\n");
			push(stack_b, stack_a, "pa\n");
			i--;
		}
	}
}

t_list	*get_position(t_list *stack, int max, int *pos)
{
	*pos = 0;
	while (stack->data != max)
	{
		(*pos)++;
		stack = stack->next;
	}
	return (stack);
}