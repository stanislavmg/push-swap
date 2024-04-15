#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}				t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isspace(char	ch);
int		ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *s);
char	*ft_atoi(const char *str, int *data);
/* one-link list operations */
t_list	*ft_lstnew(int num);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);

#endif
