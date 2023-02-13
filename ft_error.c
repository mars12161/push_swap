/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:52:55 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/11 16:29:34 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_digits(long a)
{
	int		i;

	i = 1;
	if (a > 0)
	{
		while (a > 0)
		{
			a = a / 10;
			i++;
		}
	}
	return (i);
}

void	check_doubles(t_list **stack)
{
	t_list	*current;
	t_list	*tmp;

	current = *stack;
	while (current->next != *stack)
	{
		tmp = current->next;
		while (tmp != *stack)
		{
			if (current->content == tmp->content)
			{
				write(STDERR_FILENO, "Error\n", 6);
				exit(0);
			}
			tmp = tmp->next;
		}
		current = current->next;
	}
}

void	check_int_max(t_list **stack)
{
	t_list	*current;
	long	digits;

	current = *stack;
	digits = get_digits(current->content);
	while (current->next != *stack)
	{
		if (digits > 10)
		{
			write(STDERR_FILENO, "Error lol\n", 10);
			exit(0);
		}
		current = current->next;
		digits = get_digits(current->content);
	}
}
