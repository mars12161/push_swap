/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:58:42 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 14:22:40 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_b(t_list **stack_a, t_list **stack_b)
{
	
}

void	ft_sort_big(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) > 3 && !ft_is_sorted(*stack_a))
	{
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	
	

}
