#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>

/*stack operations*/
void	swap(t_list **stack);
void	push(t_list **from, t_list **in);
void	shift_up(t_list **stack);
void	shift_down(t_list **stack);
/*arguments validation*/
int		valid_args(int argc, char **argv);
int		check_str(char *str);
/*stack create, initialization and free*/
int	 	create_stack(int argc, char **argv, t_list **stack_a);
/*sorting algorithm*/
void	sort_stack(t_list **stack_a, t_list **stack_b);
int		search_bounds(int *min, int max, t_list *stack);

#endif