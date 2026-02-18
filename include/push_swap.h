#ifndef PUSHSWAP_H
#define PUSHSWAP_H

struct s_node
{
	int	value;
	int	index;
	struct s_node *next;
};

typedef struct s_node node;

// External libraries
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

// Internal libraries
#include"libft.h"
#include"ft_printf.h"

// Swap functions
void	sa(node **stack_a);
void	sb(node **stack_b);
void	ss(node **stack_a, node **stack_b);

// Push functions
void	pa(node **stack_a, node **stack_b);
void	pb(node **stack_a, node **stack_b);

// Rotate functions
void	ra(node **stack);
void	rb(node **stack);
void	rr(node **stack_a, node **stack_b);
void	rra(node **stack_a);
void	rrb(node **stack_b);
void	rrr(node **stack_a, node **stack_b);

// Utililities
void	create_node(node **stack_name, int value);
void	print_nodes(node **stack_name);
void	free_stack(node **stack);
int	get_max_bits(node *stack);
int	stack_size(node *stack);
int	get_max_index(node *stack);
void	assign_index(node **stack_a);

// Sort
void	radix_sort(node **stack_a, node **stack_b);


#endif
