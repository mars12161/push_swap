/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:16:47 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 17:40:38 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int case_ra_rb(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = ft_place_in_b(stack_b, c);
    if (i < ft_find_index(stack_a, a))
        i = ft_find_index(stack_a, a);
    return (i);
}

int case_rra_rrb(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_place_in_b(stack_b, a))
        i = ft_lstsize(stack_b) - ft_place_in_b(stack_b, c);
    if ((i < (ft_lstsize(stack_a) - ft_find_index(stack_a, a))) && ft_find_index(stack_a, a))
        i = ft_lstsize(stack_a) - ft_find_index(stack_a, a);
    return (i);
}

int case_rra_rb(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_find_index(stack_a, a))
        i = ft_lstsize(stack_a) - ft_find_index(stack_a, a);
    i = ft_place_in_b(stack_b, a) + i;
    return (i);
}

int case_ra_rrb(t_list *stack_a, *stack_b, int a)
{
    int i;

    i = 0;
    if (ft_find_index(stack_b, a))
        i = ft_lstsize(stack_b) - ft_find_index(stack_b, a);
    i = ft_place_in_b(stack_a, a) + i;
    return (i);
}