/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:26:02 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:41:40 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	1. Frees both stacks
	2. Writes error to standard error
	3. Exits program
*/
void	error_exit(t_stack *a, t_stack *b)
{
	stack_free(a);
	stack_free(b);
	write(2, "Error\n", 6);
	exit(1);
}

int	is_valid_arg(const char *str)
{
	long	result;
	int		sign;

	sign = 1;
	result = 0;
	if (!str || !*str)
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		result = result * 10 + (*str - '0');
		if (result * sign > 2147483647)
			return (0);
		if (result * sign < -2147483648)
			return (0);
		str++;
	}
	return (1);
}

int	is_sorted(t_stack *a)
{
	t_node	*current;

	if (!a || !a->top)
		return (1);
	current = a->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	assign_indexes(t_stack *a)
{
	int			rank;
	t_node		*current;
	t_node		*smallest;

	rank = 0;
	while (rank < a->size)
	{
		current = a->top;
		smallest = NULL;
		while (current)
		{
			if (current->index == -1)
			{
				if (smallest == NULL || current->value < smallest->value)
					smallest = current;
			}
			current = current->next;
		}
		if (smallest != NULL)
			smallest->index = rank;
		rank++;
	}
}

/* Returns the number of bits needed to represent the largest index */
int	get_max_bits(t_stack *a)
{
	int		max;
	int		bits;
	t_node	*current;

	max = 0;
	bits = 0;
	current = a->top;
	while (current)
	{
		if (current->index > max)
			max = current->index;
		current = current->next;
	}
	while ((max >> bits) > 0)
		bits++;
	return (bits);
}
