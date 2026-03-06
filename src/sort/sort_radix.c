/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:24:31 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:24:54 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_radix(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	bit;
	int	i;
	int	size;

	max_bits = get_max_bits(a);
	bit = 0;
	while (bit < max_bits)
	{
		size = a->size;
		i = 0;
		while (i < size)
		{
			if ((a->top->index >> bit) & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
}
