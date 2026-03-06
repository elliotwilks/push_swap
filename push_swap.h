/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 01:26:15 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/06 04:29:09 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

///////////////     STRUCTURES     //////////////// 

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}	t_stack;

///////////////      STACK & FREE     ///////////////// 

t_stack	*stack_new(void);
t_node	*node_new(int value);
void	stack_free(t_stack *stack);
void	stack_push_top(t_stack *stack, t_node *node);
t_node	*stack_pop_top(t_stack *stack);

/////////////////     OPERATIONS     /////////////////

// swap
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

// push
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

// rotate
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

// reverse rotate
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

/////////////////      SORT       //////////////////

void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);
void	sort_radix(t_stack *a, t_stack *b);

////////////////      UTILS      /////////////////// 

int		is_valid_arg(const char *str);
int		is_sorted(t_stack *a);
int		get_max_bits(t_stack *a);
void	assign_indexes(t_stack *a);
void	error_exit(t_stack *a, t_stack *b);

////////////   UTILS LIB   ///////////////////

void	ft_putstr(char *str);
int		ft_atoi(const char *str);

#endif
