/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:24:46 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:24:50 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrotate(t_stack *stack)
{
	t_node	*tail;
	t_node	*new_tail;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	tail = stack->top;
	while (tail->next)
		tail = tail->next;
	new_tail = tail->prev;
	new_tail->next = NULL;
	tail->prev = NULL;
	stack->size--;
	stack_push_top(stack, tail);
}

void	rra(t_stack *a)
{
	rrotate(a);
	ft_putstr("rra\n");
}

void	rrb(t_stack *b)
{
	rrotate(b);
	ft_putstr("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(a);
	rrotate(b);
	ft_putstr("rrr\n");
}
