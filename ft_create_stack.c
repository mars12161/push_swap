/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:18:57 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/11 16:25:00 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(int argc, char **argv, t_list **stack, int index)
{
	int	temp;
	int	i;

	i = 1;
	while (i < argc)
	{
		temp = ft_atoi(argv[i]);
		if (temp == 0)
		{
			ft_printf("Error\n");
			exit(0);
		}
		ft_add_node_back(stack, temp, &index);
		i++;
	}
}
