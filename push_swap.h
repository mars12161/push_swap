/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:41:18 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/17 12:52:46 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

void	ft_swap(t_list **stack);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ft_push(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ft_free(char **str);
void	ft_free_stack(t_list **stack);
void	ft_rotate(t_list **stack);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	ft_reverse_rotate(t_list **stack);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	ft_lstadd_front(t_list **alst, t_list *new);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *head);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	sort_three(t_list **a);
int		is_sorted(t_list **stack);
void	sort_two(t_list **stack_a);
void	case_1_2(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	smallest_to_top(t_list **stack_a);
void	ra_or_rra(t_list **stack_a, int min_value, int index);
void	create_stack(t_list **stack, char **argv, int argc);
void	adapt_index(t_list **stack);
void	adapt_indices_5(t_list **stack);
void	ft_sort_small(t_list **stack_a, t_list **stack_b);
void	print_list(t_list *stack);
void	ft_check_args(int argc, char **argv, t_list **a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		get_max_bits(t_list **stack);

#endif