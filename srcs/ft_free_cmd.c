

#include "push_swap.h"

void ft_free_double_tab(int *stackA, int *stackB)
{
    ft_free_single_tab(stackA);
    ft_free_single_tab(stackB);
}

void ft_free_single_tab(int *stack)
{
    free(stack);
}