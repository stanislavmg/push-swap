#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
void	swap(t_list **stack);
void	push(t_list **stack_a, t_list **stack_b);
void	shift_up(t_list **stack);
void	shift_down(t_list **stack);

#endif