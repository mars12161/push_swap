/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 20:53:14 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 15:19:33 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		temp;
	int		index;

	index = 0;
	stack_a = NULL;
	stack_b = NULL;
	create_stack(argc, argv, &stack_a, index);
	check_doubles(&stack_a);
	check_int_max(&stack_a);
	print_list(stack_a);
	ft_printf("\n");
	if ((argc <= 6 && argc > 2) && ft_is_sorted(stack_a) == 0)
		ft_sort_small(&stack_a, &stack_b);
	else if ((argc > 6) && ft_is_sorted(stack_a) == 0)
		ft_sort_big(&stack_a, &stack_b);
	ft_printf("\n");
	print_list(stack_b);
	free(stack_a);
}
