#include"push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		printf("Use arguments");
		return (0);
	}

	node	*stack_a;
	node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;

	i = 1;
	while (i < argc)
	{
		create_node(&stack_a, atoi(argv[i]));
		i++;
	}
	
	assign_index(&stack_a);
	// radix_sort(&stack_a, &stack_b);

	// testing small sort
	small_sort(&stack_a);
	printf("\n");
	print_nodes(&stack_a);
	
	free_stack(&stack_a);
	return (0);
}
