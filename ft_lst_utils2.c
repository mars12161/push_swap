/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:05:46 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/17 12:05:39 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_list **stack, int val)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

t_list	*get_next_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min
					|| head->content < min->content))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	adapt_index(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (head)
	{
		while (head->next)
		{
			if (head->content > head->next->content)
				return (0);
			head = head->next;
		}
	}
	return (1);
}

void	print_list(t_list *list)
{
	t_list	*temp;

	temp = list;
	if (!list)
	{
		ft_printf("Wrong input!\n");
	}
	else
	{
		while (temp->next)
		{
			ft_printf("%d ", temp->content);
			ft_printf("%d\n", temp->index);
			temp = temp->next;
		}
		ft_printf("%d ", temp->content);
		ft_printf("%d\n", temp->index);
	}
}
