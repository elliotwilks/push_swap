/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:25:49 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:25:51 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Pop top of src and push it onto top of dst */
static void	push(t_stack *dst, t_stack *src)
{
	t_node	*node;

	if (!src || !src->top)
		return ;
	node = stack_pop_top(src);
	stack_push_top(dst, node);
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	ft_putstr("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	ft_putstr("pb\n");
}
