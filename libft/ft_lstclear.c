#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*t;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		free(*lst);
		*lst = t;
	}
	*lst = NULL;
}
