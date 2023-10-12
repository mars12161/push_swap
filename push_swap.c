/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:01:08 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/17 12:46:48 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	if (!a || !b)
		return (0);
	*a = NULL;
	*b = NULL;
	create_stack(a, argv, argc);
	ft_check_args(argc, argv, a, b);
	if (is_sorted(a))
	{
		ft_free_stack(a);
		ft_free_stack(b);
		return (0);
	}
	if ((argc <= 6 && argc > 2) && is_sorted(a) == 0)
		ft_sort_small(a, b);
	else
		radix_sort(a, b);
	ft_free_stack(a);
	ft_free_stack(b);
}
