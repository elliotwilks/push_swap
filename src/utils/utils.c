#include"push_swap.h"

void    create_node(node **stack_a, int nbr)
{
        node *n = malloc(sizeof(node));
        n->value = nbr;
        n->next = *stack_a;
        *stack_a = n;
}

int     node_count(node **stack_a)
{
        int     count;
        node    *temp;

        temp = *stack_a;
        count = 0;
        while (temp != NULL)
        {
                temp = temp->next;
                count++;
        }
        return (count);
}

void    assign_index(node **stack_a)
{
        int     i;
        int     index;
        node    *current;
        node    *compare;

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

void    print_nodes(node **stack_a)
{
        node    *temp;

        temp = *stack_a;
        while (temp != NULL)
        {
                printf("Value: %d Index: %d\n", temp->value, temp->index);
                temp = temp->next;
        }
}
// Need to understand this better
int	get_max_bits(node *stack)
{
	int	max;
	int	bits;
	
	// Finds the largest index number in the stack
	max = get_max_index(stack);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

int	stack_size(node *stack)
{
	node	*temp;
	int	size;

	size = 0;
	temp = stack;
	while (temp != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

int	get_max_index(node *stack)
{
	int	max;
	node	*temp;

	if (stack == NULL)
		return (0);

	max = stack->index;
	temp = stack->next;

	while (temp != NULL)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}
