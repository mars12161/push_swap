/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:44:35 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/09 19:24:07 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*current;
	int		tmp;

	if (*stack)
	{
		head = *stack;
		while (head->next != *stack)
			head = head->next;
		tmp = head->content;
		current = head;
		while (current != *stack)
		{
			current->content = current->previous->content;
			current = current->previous;
		}
		(*stack)->content = tmp;
	}
}

void	rra(t_list **a)
{
	ft_reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	ft_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_printf("rrr\n");
}
