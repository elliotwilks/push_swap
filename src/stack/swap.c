#include"push_swap.h"

/*
 * This file contains the swap operations.
 * 	sa - swap the first two nodes at the top of stack a.
 * 	sb - swap the first two nodes at the top of stack b.
 * 	ss - do both sa and sb at the same time. 
 */

void	sa(node **stack_a)
{
	node	*first;
	node	*second;
	node	*third;

	if (stack_a == NULL)
		return ;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;

	first= *stack_a;
	second = (*stack_a)->next;
	third = second->next;

	*stack_a = second;
	(*stack_a)->next = first;
	first->next = third;

}

void	sb(node **stack_b)
{
	node	*first;
	node	*second;
	node	*third;

	if (stack_b == NULL)
		return ;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;

	first= *stack_b;
	second = (*stack_b)->next;
	third = second->next;

	*stack_b = second;
	(*stack_b)->next = first;
	first->next = third;
}

void	ss(node **stack_a, node **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	
	printf("ss\n");
}


