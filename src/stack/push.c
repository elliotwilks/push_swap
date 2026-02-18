#include"push_swap.h"

/*
 * This file contains the push functions
 * 	- pa: Take the top node of stack b and push it to the top of stack a
 * 	- pb: Take the top node of stack r and push it to the top of stack b
 *
 */

void	pa(node **stack_a, node **stack_b)
{
	node	*top_b;

	if (stack_b == NULL || *stack_b == NULL)
		return ;

	top_b = *stack_b;

	// Detatching the top of stack b 
	*stack_b = (*stack_b)->next;

	// connecting top of b to the top of stack_a 
	top_b->next = *stack_a;

	// setting the new value for stack a
	*stack_a = top_b;
	
	printf("pa\n");
}

void	pb(node **stack_a, node **stack_b)
{
	node	*top_a;

	if (stack_a == NULL || *stack_a == NULL)
		return ;

	// Taking the top value of stack_a
	top_a = *stack_a;

	// Detatching the top value of stack_a
	*stack_a = (*stack_a)->next;

	// Connecting top_a to the top of stack_b
	top_a->next = *stack_b;

	*stack_b = top_a;

	printf("pb\n");
}
