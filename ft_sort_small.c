/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:41:33 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/14 21:55:17 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

void	case_1_2(t_list **stack_a)
{
	if (((*stack_a)->content > (*stack_a)->next->content)
		&& ((*stack_a)->next->content < (*stack_a)->next->next->content)
		&& ((*stack_a)->next->next->content > (*stack_a)->content))
		sa(stack_a);
	else if (((*stack_a)->content > (*stack_a)->next->content
			&& (*stack_a)->next->content > (*stack_a)->next->next->content)
		&& (*stack_a)->content > (*stack_a)->next->next->content)
	{
		sa(stack_a);
		rra(stack_a);
	}
}

void	sort_three(t_list **stack_a)
{
	case_1_2(stack_a);
	if (((*stack_a)->content > (*stack_a)->next->content)
		&& ((*stack_a)->next->content < (*stack_a)->next->next->content)
		&& ((*stack_a)->next->next->content < (*stack_a)->content))
		ra(stack_a);
	else if (((*stack_a)->content < (*stack_a)->next->content)
		&& ((*stack_a)->next->content > (*stack_a)->next->next->content)
		&& ((*stack_a)->content < (*stack_a)->next->next->content))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (((*stack_a)->content < (*stack_a)->next->content)
		&& ((*stack_a)->next->content > (*stack_a)->next->next->content)
		&& ((*stack_a)->next->next->content < (*stack_a)->content))
		rra(stack_a);
}

void	sort_four_five(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		smallest_to_top(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	if (ft_lstsize(*stack_b) == 2)
		pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	ft_sort_small(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		sort_two(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		sort_three(stack_a);
	else if (ft_lstsize(*stack_a) == 5 || ft_lstsize(*stack_a) == 4)
		sort_four_five(stack_a, stack_b);
}
