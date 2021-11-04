/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_cmd_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:00:05 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 18:05:21 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int *ra_swap(int *stackA, int *stackB, int argc)
{
    int tmp;
    int tmp2;
    int i;
    int j;

    i = argc - 1;
    j = 0;

    tmp = stackA[0];
    tmp2 = stackA[i];
    stackA[0] = tmp2;
    stackA[i] = tmp;
    while(j < argc - 1)
    {
        tmp = stackA[j];
        stackA[j] = stackA[j + 1];
        stackA[j + 1] = tmp;
        j++;
    }
    ft_putstr_fd("ra\n", 0);
    return (stackA);
}

int *rb_swap(int *stackA, int *stackB, int argc)
{
    int tmp;
    int tmp2;
    int i;
    int j;

    i = argc - 1;
    j = 0;

    tmp = stackB[0];
    tmp2 = stackB[i];
    stackB[0] = tmp2;
    stackB[i] = tmp;
    while(j < argc - 1)
    {
        tmp = stackB[j];
        stackB[j] = stackB[j + 1];
        stackB[j + 1] = tmp;
        j++;
    } 
    ft_putstr_fd("rb\n", 0);
    return (stackB);
}

int *rr_swap(int *stackA, int *stackB, int argc)
{
    ra_swap(stackA, stackB, argc);
    rb_swap(stackA, stackB, argc);
    ft_putstr_fd("rr\n", 0);
    return (stackA);

}*/

void	rotate_a(t_stack *stackA)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackA->size - 2;
	a = stackA->pos + 1;
	swapper = stackA->tab[stackA->pos];
	while (a <= the_last)
	{
		stackA->tab[a - 1] = stackA->tab[a];
		a++;
	}
	stackA->tab[the_last] = swapper;
	ft_putstr_fd("ra\n", 1);
}

void	rotate_a_sp(t_stack *stackA)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackA->size - 2;
	a = stackA->pos + 1;
	swapper = stackA->tab[stackA->pos];
	while (a <= the_last)
	{
		stackA->tab[a - 1] = stackA->tab[a];
		a++;
	}
	stackA->tab[the_last] = swapper;
}

void	rotate_b(t_stack *stackB)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackB->size - 2;
	a = stackB->pos + 1;
	swapper = stackB->tab[stackB->pos];
	while (a <= the_last)
	{
		stackB->tab[a - 1] = stackB->tab[a];
		a++;
	}
	stackB->tab[the_last] = swapper;
	ft_putstr_fd("rb\n", 1);
}

void	double_rotate(t_stack *stackA, t_stack *stackB)
{
	int	swapper;
	int	the_last;
	int	a;

	the_last = stackA->size - 2;
	a = stackA->pos + 1;
	swapper = stackA->tab[stackA->pos];
	while (a <= the_last)
	{
		stackA->tab[a - 1] = stackA->tab[a];
		a++;
	}
	stackA->tab[the_last] = swapper;
	the_last = stackB->size - 2;
	a = stackB->pos + 1;
	swapper = stackB->tab[stackB->pos];
	while (a <= the_last)
	{
		stackB->tab[a - 1] = stackB->tab[a];
		a++;
	}
	stackB->tab[the_last] = swapper;
	ft_putstr_fd("rr\n", 1);
}

