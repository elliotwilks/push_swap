/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:24:07 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:29:22 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	top;
	int	mid;
	int	bot;

	top = a->top->value;
	mid = a->top->next->value;
	bot = a->top->next->next->value;
	if (top > mid && mid < bot && top < bot)
		sa(a);
	else if (top > mid && mid > bot)
	{
		sa(a);
		rra(a);
	}
	else if (top > mid && mid < bot && top > bot)
		ra(a);
	else if (top < mid && mid > bot && top < bot)
	{
		sa(a);
		ra(a);
	}
	else if (top < mid && mid > bot && top > bot)
		rra(a);
}

/* Find the minimum value in the stack */
static int	find_min(t_stack *a)
{
	t_node	*cur;
	int		min;

	min = a->top->value;
	cur = a->top->next;
	while (cur)
	{
		if (cur->value < min)
			min = cur->value;
		cur = cur->next;
	}
	return (min);
}

/* Rotate the minimum value to the top efficiently */
static void	rotate_min_to_top(t_stack *a)
{
	int		min;
	int		pos;
	int		i;
	t_node	*cur;

	min = find_min(a);
	pos = 0;
	cur = a->top;
	while (cur->value != min)
	{
		pos++;
		cur = cur->next;
	}
	i = 0;
	if (pos <= a->size / 2)
	{
		while (i++ < pos)
			ra(a);
	}
	else
	{
		pos = a->size - pos;
		while (i++ < pos)
			rra(a);
	}
}

/*
** For 4-5 elements:
** Push smallest to b, then 2nd smallest to b (for 5 elements),
** sort remaining 3 in a, push back from b.
** Each time we push the current minimum to b.
*/
void	sort_five(t_stack *a, t_stack *b)
{
	int	pushes;

	pushes = a->size - 3;
	while (pushes--)
	{
		rotate_min_to_top(a);
		pb(a, b);
	}
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}
