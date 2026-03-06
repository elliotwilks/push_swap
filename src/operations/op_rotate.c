/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:24:58 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:28:09 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	t_node	*top;
	t_node	*tail;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	top = stack_pop_top(stack);
	tail = stack->top;
	while (tail->next)
		tail = tail->next;
	tail->next = top;
	top->prev = tail;
	top->next = NULL;
	stack->size++;
}

void	ra(t_stack *a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rb(t_stack *b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}
