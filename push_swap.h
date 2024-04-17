#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

/* stack operations */
void	swap(t_list **stack, const char *str);
void	push(t_list **from, t_list **in, const char *str);
void	shift_up(t_list **stack, const char *str);
void	shift_down(t_list **stack, const char *str);
/* arguments validation */
int		valid_args(int argc, char **argv, int *count, int **arr);
int		check_duplicate(int	*arr, int size);
int		check_str(char *str, int *count);
int		check_arr(int	*arr, int size);
int		check_order(t_list *stack);

/* stack create, initialization and free */
int 	*create_array(int argc, char **argv, int count);
void	create_stack(t_list **stack_a, int *arr, int size);
/* sorting algorithm */
void	sort_stack(t_list **stack_a, t_list **stack_b, int *arr, int size);
void	small_sort(t_list **stack_a, t_list **stack_b, int *arr, int size);
void	five_sort(t_list **stack_a, t_list **stack_b, int *arr, int size);
void	finish_sort(t_list **stack_a, t_list **stack_b, int *arr, int size);
t_list	*get_position(t_list *stack, int max, int *pos);
void	sort_array(int *arr, int size);
void	three_sort(t_list **stack_a);
int		ft_sqrt(int nb);
int		ft_log(int n);

#endif