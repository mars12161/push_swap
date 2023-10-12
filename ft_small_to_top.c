/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_to_top.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:32:34 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/15 14:39:21 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_or_rra(t_list **stack_a, int min_value, int index)
{
	while ((*stack_a)->content != min_value)
	{
		if (index <= ft_lstsize(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
}

void	smallest_to_top(t_list **stack_a)
{
	t_list	*current;
	int		min_value;
	int		index;

	if (*stack_a)
	{
		current = *stack_a;
		min_value = current->content;
		while (current->next)
		{
			if (current->next->content < min_value)
			{
				min_value = current->next->content;
				current = current->next;
				index = current->index;
			}
			else
				current = current->next;
		}
		ra_or_rra(stack_a, min_value, index);
	}
}
