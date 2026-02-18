#include"push_swap.h"

void    free_stack(node **stack)
{
        node    *temp;

        while(*stack)
        {
                temp = *stack;
                *stack = (*stack)->next;
                free(temp);
        }
}

