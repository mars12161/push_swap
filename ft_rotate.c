/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:57:43 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 14:07:25 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	int		tmp;
	t_list	*current;

	if (*stack)
	{
		tmp = (*stack)->content;
		current = *stack;
		while (current->next != *stack)
		{
			current->content = current->next->content;
			current = current->next;
		}
		current->content = tmp;
	}
	adapt_indices(stack);
}

void	ra(t_list **a)
{
	ft_rotate(a);
	ft_printf("ra\n");
}

void	rb(t_list **b)
{
	ft_rotate(b);
	ft_printf("rb\n");
}

void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("rr\n");
}
