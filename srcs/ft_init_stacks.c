/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:59:51 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 18:36:22 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int *init_stack_A(int argc, char **argv)
{
    int i;
    int j;
    int *stackA;

    i = 1;
    j = 0;
    stackA = (int *)malloc(sizeof(int) * argc + 1);
	if (!stackA)
		return (0);
	while(i <= argc - 1)
	{
		stackA[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
    return (stackA);
}

int *init_stack_B(int argc, char **argv)
{
    int i;
    int j;
    int *stackB;

    i = 0;
    j = 0;
    stackB = (int *)malloc(sizeof(int) * argc + 1);
	if (!stackB)
		return (0);
    while (i < argc - 1)
    {
        stackB[i] = 0;
        i++;
    }
    return (stackB);
}*/

void	ft_init_stackA(t_stack *stackA, int argc)
{
	stackA->size = argc;
	stackA->pos = 0;
	stackA->max = 0;
	stackA->min = 0;
	stackA->no_try = 0;
	stackA->first_bien_tried = 0;
	stackA->len_of_long_serie = 1;
	stackA->for_ra = 0;
	stackA->for_rra = 0;
}

void	ft_init_stackB(t_stack *stackB, int argc)
{
	stackB->size = argc;
	stackB->pos = argc - 1;
	stackB->max = 0;
	stackB->min = 0;
	stackB->no_try = 0;
	stackB->for_rb = 0;
	stackB->for_rrb = 0;
}

void	ft_init_stackC(t_stack *stackC, int argc)
{
	stackC->size = argc;
	stackC->pos = 0;
	stackC->max = 0;
	stackC->min = 0;
	stackC->no_try = 0;
}

void	putintab(t_stack *stackA, char **tab)
{
	int	a;

	a = 0;
	stackA->tab = malloc(sizeof(long int) * stackA->size - 1);
	if (!stackA->tab)
		return ;
	while (a < stackA->size - 1)
	{
		stackA->tab[a] = ft_atoi_2(tab[a + 1], stackA);
		a++;
	}
}

void	init_tab(t_stack *stackB)
{
	int			a;

	a = 0;
	stackB->tab = malloc(sizeof(long int) * stackB->size - 1);
	if (!stackB->tab)
		return ;
	while (a < stackB->size - 1)
	{
		stackB->tab[a] = 0;
		a++;
	}
}

void    ft_free_stack(int *stackA, int argc)
{
    int i;

    i = 0;
    while (i < argc - 1)
    {
        free(stackA);
        i++;
    }
}