/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:37:11 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/15 14:38:38 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	head = *stack;
	if (head && head->next)
	{
		tmp = head;
		*stack = (*stack)->next;
		ft_lstadd_back(stack, tmp);
	}
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
