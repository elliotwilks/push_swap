#include"push_swap.h"

struct s_node
{
	int	value;
	struct s_node *next;
};

typedef struct s_node node;

/*
 * Plan 
 * 	
 * 	- Improve operations functions.
 * 	- Create indexing function.
 *	- Create radix sort function.
 *
 */

// Need to adjust this
void	give_index(node **stack)
{
	node	*compare;
	node	*current;
	int	index;

	compare = current->value;
	current = *stack;
	index = 0;
	while (current)
	{
		if (c)
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;

	int	i;

	node	*stack_a;
	node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	i = 1;
	while (i <= 4)
	{
		create_node(&stack_a, atoi(argv[i]));
		i++;
	}
	while (i <= 8)
	{
		create_node(&stack_b, atoi(argv[i]));
		i++;
	}

	printf("Here is stack a\n");
	print_stack(&stack_a);

	
	printf("Here is stack b\n");
	print_stack(&stack_b);

	
	printf("\n");
	printf("--------------- \n");
	
	rra(&stack_a);
	rrb(&stack_b);
	printf("-------------\n\n");

	printf("Here is stack a after\n");
	print_stack(&stack_a);

	printf("Here is stack b after\n");
	print_stack(&stack_b);

	// frees all the nodes
	free_stack(&stack_a);
	free_stack(&stack_b);

	return (0);
}
