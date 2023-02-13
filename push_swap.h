/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:09:48 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 14:13:18 by mschaub          ###   ########.fr       */
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
	struct s_list	*next;
	struct s_list	*previous;
	int				index;
}	t_list;

static void	ft_swap(t_list **stack);
void		create_stack(int argc, char **argv, t_list **stack, int index);
void		print_list(t_list *list);
void		ft_add_node_back(t_list **lst, int content, int *index);
int			ft_lstsize(t_list *lst);
void		ft_rotate(t_list **stack);
void		ft_reverse_rotate(t_list **stack);
void		ft_push(t_list **a, t_list **b);
int			ft_is_sorted(t_list *stack);
void		ft_sort_small(t_list **a, t_list **b);
void		ft_sort_big(t_list **stack_a, t_list **stack_b);
void		sort_four_five(t_list **stack_a, t_list **stack_b);
void		sort_three(t_list **stack_a);
void		sort_two(t_list **stack_a);
void		case_1_2(t_list **stack_a);
void		smallest(t_list **stack_a, t_list **stack_b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		adapt_indices(t_list **stack);
void		smallest_to_top(t_list **stack_a, t_list **stack_b);
void		check_doubles(t_list **stack);
void		check_int_max(t_list **stack);
int			ft_error(t_list **stack_a);
int			get_digits(long a);
int			ft_find_index(t_list **stack, int nbr);

#endif