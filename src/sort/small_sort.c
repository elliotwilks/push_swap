#include "push_swap.h"

/*
 * What are the small sort functions?
 * 	- a function for less than 3 arguments
 * 	- a function for between 3 and 5 arguments
 *
 * what does a sort need to do?
 * 	- compare the index values of each node
 * 	- move them in the correct ascending order.
 * 	- use the stack operations or should I use bubble sort?
 */

// 
void	small_sort_bubble(node **stack_a)
{
	int	i;
	node	*current;
	node	*temp;

	i = 1;
	current = *stack_a;
	while (i < node_count(stack_a))
	{
		if (current->index > current->next->index)
		{
			temp = current;
			current = current->next;
			current->next = temp;
			current = stack_a;
		}
		else
			current = current->next;

		i++;
	}
}
