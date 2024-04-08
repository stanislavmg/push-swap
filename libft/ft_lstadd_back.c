#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ps;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ps = ft_lstlast(*lst);
	ps -> next = new;
}
