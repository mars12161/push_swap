/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:45:39 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 18:02:08 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_ab(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;
	
	tmp = stack_a;
	i = case_rra_rrb(stack_a, stack_b, stack_a->content);
	while (tmp->next != stack_a)
	{
		if (i > case_ra_rb(stack_a, stack_b, tmp->content))
			i = case_ra_rb(stack_a, stack_b, tmp->content);
		if (i > case_rra_rrb(stack_a, stack_b, tmp->content))
			i = case_rra_rrb(stack_a, stack_b, tmp->content);
		if (i > case_ra_rrb(stack_a, stack_b, tmp->content))
			i = case_ra_rrb(stack_a, stack_b, tmp->content);
		if (i > case_rra_rb(stack_a, stack_b, tmp->content))
			i = case_rra_rb(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_ba(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*tmp;

	tmp = stack_b;
	i = case_rra_rrb_a(stack_a, stack_b, stack_b->content);
	while (tmp->next != stack_a)
	{
		if (i > case_ra_rb_a(stack_a, stack_b, tmp->content))
			i = case_ra_rb_a(stack_a, stack_b, tmp->content);
		if (i > case_rra_rrb_a(stack_a, stack_b, tmp->content))
			i = case_rra_rrb_a(stack_a, stack_b, tmp->content);
		if (i > case_ra_rrb_a(stack_a, stack_b, tmp->content))
			i = case_ra_rrb_a(stack_a, stack_b, tmp->content);
		if (i > case_rra_rb_a(stack_a, stack_b, tmp->content))
			i = case_rra_rb_a(stack_a, stack_b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}