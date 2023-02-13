/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:54:09 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 17:58:40 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int case_ra_rb_a(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = ft_place_in_a(stack_a, c);
    if (i < ft_find_index(stack_b, a))
        i = ft_find_index(stack_a, a);
    return (i);
}

int case_rra_rrb_a(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_place_in_a(stack_a, a))
        i = ft_lstsize(stack_a) - ft_place_in_a(stack_a, c);
    if ((i < (ft_lstsize(stack_b) - ft_find_index(stack_b, a))) && ft_find_index(stack_b, a))
        i = ft_lstsize(stack_b) - ft_find_index(stack_b, a);
    return (i);
}

int case_rra_rb_a(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_find_index(stack_a, a))
        i = ft_lstsize(stack_a) - ft_find_index(stack_a, a);
    i = ft_place_in_b(stack_b, a) + i;
    return (i);
}

int case_ra_rrb_a(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_find_index(stack_b, a))
        i = ft_lstsize(stack_b) - ft_find_index(stack_b, a);
    i = ft_place_in_b(stack_a, a) + i;
    return (i);
}