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
    n = 1;
    sort_array(arr, size);
    while (*stack_a)
    {
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
    size--;
 	while (*stack_b)
    {
        if ((*stack_b)->data == arr[size])
        {
            push(stack_b, stack_a, "pa\n");
            size--;
        }
        else if (ft_lstlast(*stack_b)->data == arr[size])
            shift_down(stack_b, "rrb\n");
        //push(stack_b, stack_a, "pa\n");
    }
}