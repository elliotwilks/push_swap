#include"push_swap.h"

/*
 * Radix sort function
 * 	Move through each bit from least significant to 
 * 	most significant. If it is 0 push to stack b. If
 * 	it is a 1 keep in stack a.
 */

void	radix_sort(node **stack_a, node **stack_b)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	size = stack_size(*stack_a);
	max_bits = get_max_bits(*stack_a);

	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
			j++;
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
		i++;
	}
}
