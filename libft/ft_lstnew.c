#include "libft.h"

t_list	*ft_lstnew(int	num)
{
	t_list	*ps;

	ps = malloc(sizeof(t_list));
	if (!ps)
		return (NULL);
	ps->data = num;
	ps->next = NULL;
	return (ps);
}
