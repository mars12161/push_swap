/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 21:47:24 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 14:07:54 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*first_b;
	t_list	*current;
	int		index;

	first_b = *b;
	(*b)->next->previous = first_b->previous;
	first_b->previous->next = (*b)->next;
	*b = (*b)->next;
	if (*a == NULL)
	{
		first_b->next = first_b;
		first_b->previous = first_b;
		*a = first_b;
	}
	else
	{
		first_b->next = *a;
		first_b->previous = (*a)->previous;
		(*a)->previous->next = first_b;
		(*a)->previous = first_b;
		*a = first_b;
	}
	adapt_indices(a);
	adapt_indices(b);
}

void	pa(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	ft_push(b, a);
	ft_printf("pb\n");
}
