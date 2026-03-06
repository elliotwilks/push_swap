/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:24:40 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:24:54 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Swap the top two nodes of a stack by swapping values */
static void	swap(t_stack *stack)
{
	int	tmp_value;
	int	tmp_index;

	if (!stack || !stack->top || !stack->top->next)
		return ;
	tmp_value = stack->top->value;
	tmp_index = stack->top->index;
	stack->top->value = stack->top->next->value;
	stack->top->index = stack->top->next->index;
	stack->top->next->value = tmp_value;
	stack->top->next->index = tmp_index;
}

void	sa(t_stack *a)
{
	swap(a);
	ft_putstr("sa\n");
}

void	sb(t_stack *b)
{
	swap(b);
	ft_putstr("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	ft_putstr("ss\n");
}
