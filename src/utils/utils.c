#include"push_swap.h"

/*
 * This file contains the utilitie functions for push_swap.
 *	- create_node: creates a node from the arguments.
 *	- print_stack: prints the stack given.
 *	- free_stack: frees all nodes in the stack.
 */

void	create_node(node **stack_name, int value)
{
	node *n = malloc(sizeof(node));
	n->value = value;
	n->next = *stack_name;
	*stack_name = n;
}

void	print_stack(node **stack_name)
{
	node	*temp;

	temp = *stack_name;
	while (temp != NULL)
	{
		printf("%d\n", temp->value);
		temp = temp->next;
	}
}

void	free_stack(node **stack)
{
	node	*temp;

	while(*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
}

void	assign_index(node **stack_a)	

	node	*temp;
	int	index;

	// temp is pointing to the first node
	temp = *stack_a;
	index = 0;
/*
 * Give each node an index number based on how big the value is 
 * compared to the other nodes. 
 * for example 
 *
 * 	30   40   10  50 
 *       1   2    0   3	
 *
 * first I need to traverse through the nodes in stack a.
 *
 *
 */
{
	// We are comparing the two values so we need to check if both
	// temp and temp next is not null
	while (temp != NULL && temp->next != NULL)
	{
		if (temp->value < temp->next->value)
			index++;
		temp = temp->next;
	}
	
	temp->index = index;
	printf("%d\n", temp->index);
}
