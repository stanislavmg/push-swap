#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdio.h>

/*stack operations*/

void	swap(t_list **stack);
void	push(t_list **stack, t_list *node);
void	shift_up(t_list **stack);
void	shift_down(t_list **stack);
/*arguments validation*/
int	valid_args(int argc, char **argv);
int	check_str(char *str);
/*stack create, initialization and free*/
void del_node(void *data);
int create_stack(int argc, char **argv, t_list **stack_a);
/*sorting algorithm*/

#endif