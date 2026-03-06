/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:23:40 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 01:29:43 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Check for duplicate values in the stack */
static int	has_duplicates(t_stack *a)
{
	t_node	*i;
	t_node	*j;

	i = a->top;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->value == j->value)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

/* Parse args and fill stack a */
static void	fill_stack(t_stack *a, t_stack *b, int argc, char **argv)
{
	int		i;
	t_node	*node;
	t_node	*tail;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_arg(argv[i]))
			error_exit(a, b);
		node = node_new((int)ft_atoi(argv[i]));
		if (node == NULL)
			error_exit(a, b);
		if (a->top == NULL)
		{
			a->top = node;
			a->size++;
		}
		else
		{
			tail = a->top;
			while (tail->next)
				tail = tail->next;
			tail->next = node;
			node->prev = tail;
			a->size++;
		}
		i++;
	}
	if (has_duplicates(a) == 1)
		error_exit(a, b);
}

static void	run_sort(t_stack *a, t_stack *b)
{
	if (is_sorted(a))
		return ;
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_five(a, b);
	else
	{
		assign_indexes(a);
		sort_radix(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = stack_new();
	b = stack_new();
	if (a == NULL || b == NULL)
	{
		stack_free(a);
		stack_free(b);
		write(2, "Error\n", 6);
		return (1);
	}
	fill_stack(a, b, argc, argv);
	run_sort(a, b);
	stack_free(a);
	stack_free(b);
	return (0);
}
