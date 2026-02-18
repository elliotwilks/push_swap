#include"push_swap.h"

/*
 * This file contains the rotate functions such as:
 * 	- ra
 * 	- rb
 * 	- rr
 * 	- rra
 * 	- rrb
 * 	- rr
 */

// (ra): Shift up all elements of stack a by 1. The first element becomes the last one.
void	ra(node **stack)
{
	node	*temp;
	node	*top;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;

	// Get the first node 
	top = *stack;

	// Detatch the first node
	*stack = (*stack)->next;

	// Setting temp to the top of the stack
	temp = *stack;
	// traverse through the stack until the end is reached
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = top;
	top->next = NULL;

	printf("ra\n");
}


// (rb): Shift up all elements of stack b by 1. The first element becomes the last one.
void	rb(node **stack)
{
	node	*temp;
	node	*top;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;

	// Get the first node 
	top = *stack;

	// Detatch the first node
	*stack = (*stack)->next;

	// Setting temp to the top of the stack
	temp = *stack;
	// traverse through the stack until the end is reached
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = top;
	top->next = NULL;

	printf("rb\n");
}

// rr : ra and rb at the same time.
void	rr(node **stack_a, node **stack_b)
{
	if (stack_a == NULL || *stack_a == NULL)
		return ;
	if (stack_b == NULL || *stack_b == NULL)
		return ;

	ra(&*stack_a);
	rb(&*stack_b);

	printf("rr\n");
}


// rra (reverse rotate a): The last node becomes the first one.
void	rra(node **stack_a)
{
	node	*prev;
	node	*last;

	if (stack_a == NULL || *stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	prev = NULL;
	last = *stack_a;

	// Move to the end 
	while (last->next != NULL)
	{
		prev = last;
		last  = last->next;
	}

	// Get the last node 
	prev->next = NULL;

	// linking the last one to the start of the stack
	last->next = *stack_a;
	*stack_a = last;

	printf("rra\n");
}


// rrb (reverse rotate b): The last node becomes the first one.
void	rrb(node **stack_b)
{
	node	*prev;
	node	*last;

	if (stack_b == NULL || *stack_b == NULL || (*stack_b)->next == NULL)
		return ;

	prev = NULL;
	last = *stack_b;

	// Move to the end 
	while (last->next != NULL)
	{
		prev = last;
		last  = last->next;
	}

	// Get the last node 
	prev->next = NULL;

	// linking the last one to the start of the stack
	last->next = *stack_b;
	*stack_b = last;

	printf("rrb\n");
}

// rrr : rra and rrb at the same time.
void	rrr(node **stack_a, node **stack_b)
{
	if (stack_a == NULL || *stack_a == NULL)
		return ;

	if (stack_b == NULL || *stack_b == NULL)
		return ;

	rra(&*stack_a);
	rrb(&*stack_b);

	printf("rrr\n");
}
