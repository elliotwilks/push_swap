/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_turk_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:31:14 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/12 21:43:38 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Returns the position of the node */
int	get_position(t_stack *stack, t_node *node)
{
	t_node	*current;
	int		position;

	current = stack->top;
	position = 0;
	while (current)
	{
		if (current == node)
			return (position);
		position++;
		current = current->next;
	}
	return (0);
}

t_node	*find_target(t_stack *a, t_node *b_node)
{
	t_node	*current;
	t_node	*target;

	current = a->top;
	target = NULL;
	while (current)
	{
		if (current->value > b_node->value)
		{
			if (target == NULL || current->value < target->value)
				target = current;
		}
		current = current->next;
	}
	if (target == NULL)
	{
		current = a->top;
		while (current)
		{
			if (target == NULL || current->value < target->value)
				target = current;
			current = current->next;
		}
	}
	return (target);
}

int	get_cost(t_stack *stack, t_node *node)
{
	int	position;
	int	size;

	position = get_position(stack, node);
	size = stack->size;
	if (position <= size / 2)
		return (position);
	return (size - position);
}
