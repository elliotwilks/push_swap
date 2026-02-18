#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

struct	s_nodes
{
	int	value;
	int	index;
	struct s_nodes *next;
};

typedef struct s_nodes node;

void	print_nodes(node **stack_a)
{
	node	*temp;

	temp = *stack_a;
	while (temp != NULL)
	{
		printf("Value: %d Index: %d\n", temp->value, temp->index);
		temp = temp->next;
	}
}

int	node_count(node **stack_a)
{
	int	count;
	node	*temp;

	temp = *stack_a;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

void	assign_index(node **stack_a)
{
	int	i;
	int	index;
	node	*current;
	node	*compare;

	i = 0;
	index = 0;
	current = *stack_a;
	while (current != NULL)
	{
		compare = *stack_a;
		index = 0;
		i = 0;
		while (i < node_count(stack_a))
		{
			if (current->value > compare->value)
				index++;
			compare = compare->next;
			i++;
		}
		current->index = index;
		current = current->next;
	}
}

void	create_node(node **stack_a, int nbr)
{
	node *n = malloc(sizeof(node));
	n->value = nbr;
	n->next = *stack_a;
	*stack_a = n;
}

void	pb(node **stack_a, node **stack_b)
{
	node	*top_a;

	if (stack_a == NULL || *stack_a == NULL)
		return ;

	top_a = *stack_a;
	*stack_a = (*stack_a)->next;
	top_a->next = *stack_b;
	*stack_b = top_a;
	printf("pb\n");
}

// (ra): Shift up all elements of stack a by 1. The first element becomes the last one.
void	ra(node **stack)
{
	node	*temp;
	node	*top;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;

	top = *stack;
	*stack = (*stack)->next;
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = top;
	top->next = NULL;

	printf("ra\n");
}

void	radix_sort(node **stack_a, node **stack_b)
{
	node	*current;

	current = *stack_a;
	while (current != NULL)
	{
		if ((((*stack_a)->index >> 0) & 1) == 0)
    			pb(stack_a, stack_b);
		else
    			ra(stack_a);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	node	**stack_a;
	node	**stack_b;
	node	*a_head;
	node	*b_head;

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
