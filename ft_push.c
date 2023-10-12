/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:50:02 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/15 14:38:05 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a != NULL)
	{
		tmp = *a;
		*a = (*a)->next;
		tmp->next = *b;
		*b = tmp;
	}
}

void	pa(t_list **a, t_list **b)
{
	ft_push(b, a);
	ft_printf("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	ft_push(a, b);
	ft_printf("pb\n");
}
