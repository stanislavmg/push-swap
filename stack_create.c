#include "push_swap.h"

void del_node(void *data)
{
	free(data);
}

int create_stack(int argc, char **argv, t_list **stack_a)
{
	int i;
	int *data;
	void (*del)(void *);

	i = 0;
	del = del_node();
	while (i < argc)
	{
		while (argv[i][0])
		{
			data = (int *)malloc(sizeof(int));
			if (!data)
			{
				ft_lstclear(stack_a, del);
				return (1);
			}
			argv[i] = ft_atoi(argv[i], data);
			ft_lstadd_back(stack_a, ft_lstnew((void *)data));
		}
		i++;
	}
	return (0);
}