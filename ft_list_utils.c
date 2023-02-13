/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:25:18 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/13 15:27:26 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	i = 0;
	current = lst;
	while (current != NULL && current->next != lst)
	{
		current = current->next;
		i++;
	}
	return (i + 1);
}

void	ft_add_node_back(t_list **lst, int content, int *index)
{
	t_list		*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return ;
	new->content = content;
	new->index = (*index)++;
	if (*lst == NULL)
	{
		new->next = new;
		new->previous = new;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		new->previous =(*lst)->previous;
		(*lst)->previous->next = new;
		(*lst)->previous = new;
	}
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
		while(temp->next != list)
		{
			ft_printf("%d ", temp->content);
			ft_printf("%d\n", temp->index);
			temp = temp->next;
		}
		ft_printf("%d ", temp->content);
		ft_printf("%d\n", temp->index);
	}
}

void adapt_indices(t_list **stack)
{
	t_list *current;
	int i;

	i = 1;
	current = *stack;
	while (current->next != *stack)
	{
		current->index = i;
		current = current->next;
		i++;
	}
	current->index = i;
}

t_list	*ft_find_min(t_list **stack)
{
	t_list *current;
	t_list *min;

	current = *stack;
	min = current;
	while (current->next != *stack)
	{
		if (current->next->content < min->content)
			min = current->next;
		current = current->next;
	}
	return (min);
}

t_list	*ft_find_max(t_list **stack)
{
	t_list *current;
	t_list *max;

	current = *stack;
	max = current;
	while (current->next != *stack)
	{
		if (current->next->content > max->content)
			max = current->next;
		current = current->next;
	}
	return (max);
}

void	smallest_to_top(t_list **stack_a, t_list **stack_b)
{
	t_list *current;
	int	min_value;
	int index;

	if (*stack_a)
	{
		current = *stack_a;
		min_value = current->content;
		index = 0;
		while (current->next != *stack_a)
		{
			if (current->next->content < min_value)
			{
				min_value = current->next->content;
				current = current->next;
				index = current->index;
			}
			else
				current = current->next;
		}
		while ((*stack_a)->content != min_value)
		{
			if (index <= ft_lstsize(*stack_a) / 2)
			{
			ra(stack_a);
			}
			else
			{
				rra(stack_a);
			}
		}
		pb(stack_a, stack_b);
	}
}

int	ft_find_index(t_list **stack, int nbr)
{
	t_list *current;

	current = *stack;
	while (current->next != *stack)
	{
		if (current->content == nbr)
			return (current->index);
		current = current->next;
	}
	if (current->content == nbr)
		return (current->index);
	return (0);
}

t_list	*ft_last(t_list *stack)
{
	t_list *current;

	current = stack;
	if (!stack)
		return ;
	while (current->next != stack)
		current = current->next;
	return (current);
}

int	ft_place_in_b(t_list **stack_b, int number)
{
	t_list	*current;
	int		i;

	i = 1;
	if (number > (*stack_b)->content && number < ft_last(*stack_b)->content)
		i = 0;
	else if (number > ft_find_max(stack_b)->content || number < ft_find_min(stack_b)->content)
		i = ft_find_index(stack_b, ft_find_max(stack_b)->content);
	else
	{
		current = (*stack_b)->next;
		while ((*stack_b)->content < number || current->content > number)
		{
			stack_b = (*stack_b)->next;
			current = current->next;
			i++;
		}
	}
	return (i);
}

int	ft_place_in_a(t_list **stack_a, int number)
{
	t_list	*current;
	int		i;

	i = 1;
	if (number < (*stack_a)->content && number > ft_last(*stack_a)->content)
		i = 0;
	else if (number > ft_find_max(stack_a)->content || number < ft_find_min(stack_a)->content)
		i = ft_find_index(stack_a, ft_find_min(stack_a)->content);
	else
	{
		current = (*stack_a)->next;
		while ((*stack_a)->content > number || current->content < number)
		{
			stack_a = (*stack_a)->next;
			current = current->next;
			i++;
		}
	}
	return (i);
}
