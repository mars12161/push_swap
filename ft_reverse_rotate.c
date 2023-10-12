/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:39:39 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/14 21:07:18 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*head;

	head = *stack;
	if (head && head->next)
	{
		while (head->next->next != NULL)
			head = head->next;
		tmp = head->next;
		head->next = NULL;
		ft_lstadd_front(stack, tmp);
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
