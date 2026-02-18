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
	radix_sort(&stack_a, &stack_b);

	printf("\n");
	print_nodes(&stack_a);
	
	free_stack(&stack_a);
	return (0);
}

/*
int     main(int argc, char **argv)
{
        int     i;
        node    **stack_a;
        node    **stack_b;
        node    *a_head;
        node    *b_head;

        if (argc < 2)
        {
                printf("Use arguments");
                return (0);
        }

        i = 1;
        a_head = NULL;
        b_head = NULL;
        stack_a = &a_head;
        stack_b = &b_head;
        while (i < argc)
        {
                create_node(&*stack_a, atoi(argv[i]));
                i++;
        }
        print_nodes(stack_a);
        assign_index(stack_a);
        printf("\n");
        print_nodes(stack_a);
        print_nodes(stack_b);

        radix_sort(stack_a, stack_b);

        print_nodes(stack_b);
        return (0);
}

*/
