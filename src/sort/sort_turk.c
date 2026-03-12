/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_turk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 21:31:40 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/12 21:45:07 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Get the node in stack b with the lowest cost */
static t_node	*get_cheapest(t_stack *a, t_stack *b)
{
	t_node	*current;
	t_node	*cheapest;
	int		lowest_cost;
	int		total_cost;

	current = b->top;
	cheapest = NULL;
	lowest_cost = INT_MAX;
	while (current)
	{
		total_cost = get_cost(b, current)
			+ get_cost(a, find_target(a, current));
		if (total_cost < lowest_cost)
		{
			lowest_cost = total_cost;
			cheapest = current;
		}
		current = current->next;
	}
	return (cheapest);
}

static void	bring_to_top(t_stack *stack, t_node *node,
	void (*rotate)(t_stack *), void (*rrotate)(t_stack *))
{
	if (get_position(stack, node) <= stack->size / 2)
	{
		while (stack->top != node)
			rotate(stack);
	}
	else
	{
		while (stack->top != node)
			rrotate(stack);
	}
}

static void	rotate_min_to_top(t_stack *a)
{
	t_node	*current;
	t_node	*min_node;

	current = a->top;
	min_node = a->top;
	while (current)
	{
		if (current->value < min_node->value)
			min_node = current;
		current = current->next;
	}
	bring_to_top(a, min_node, ra, rra);
}

void	sort_turk(t_stack *a, t_stack *b)
{
	int		push_count;
	t_node	*cheapest;
	t_node	*target;

	push_count = a->size - 3;
	while (push_count--)
		pb(a, b);
	sort_three(a);
	while (b->size > 0)
	{
		cheapest = get_cheapest(a, b);
		target = find_target(a, cheapest);
		bring_to_top(b, cheapest, rb, rrb);
		bring_to_top(a, target, ra, rra);
		pa(a, b);
	}
	rotate_min_to_top(a);
}
