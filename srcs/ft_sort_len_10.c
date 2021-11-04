/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_len_10.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:51:12 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 20:04:47 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	already_try(t_stack *t_stack)
{
	int	a;

	a = 1;
	while (a <= t_stack->size - 1)
	{
		if (a == t_stack->size - 2)
		{
			if (t_stack->tab[a] < t_stack->tab[a + 1])
			{
				t_stack->no_try = 1;
				return (1);
			}
		}
		else if (t_stack->tab[a] > t_stack->tab[a + 1])
			return (0);
		a++;
	}
	t_stack->no_try = 1;
	return (1);
}

int	find_min(t_stack *t_stack)
{
	int	a;

	a = t_stack->pos + 1;
	t_stack->min = t_stack->tab[t_stack->pos];
	while (a < t_stack->size - 1)
	{
		if (t_stack->tab[a] < t_stack->min)
			t_stack->min = t_stack->tab[a];
		a++;
	}
	a = 0;
	while (t_stack->tab[a] != t_stack->min)
		a++;
	return (a);
}

/*void    ft_sort_numbers_2(int *stackA, int *stackB, int argc)
{
        ra_swap(stackA, stackB, argc);
}

void    ft_sort_numbers_3(int *stackA, int *stackB, int argc)
{
  while (argc - 1)
  {
      if ((stackA[0] > stackA[1]) && (stackA[0] < stackA[2]))
            sa_swap(stackA, argc);
        else if ((stackA[0] > stackA[1]) && (stackA[0] > stackA[2])
        && (stackA[1] > stackA[2]))
        {
            sa_swap(stackA, argc);
            renverse_a(stackA);
        }
        else if ((stackA[0] > stackA[1]) && (stackA[1] < stackA[2])
        && (stackA[2] < stackA[0]))
            ra_swap(stackA, stackB, argc);
        else if ((stackA[2] < stackA[1]) && (stackA[2] < stackA[1])
        && (stackA[0] < stackA[1]))
            renverse_a(stackA, stackB, argc);
        else if ((stackA[0] < stackA[1]) && (stackA[1] > stackA[2])
        && (stackA[0] > stackA[2]))
        {
            sa_swap(stackA, argc);
            ra_swap(stackA, stackB, argc);
        }
        argc--;
    }
}

void    ft_sort_numbers_4(int *stackA, int *stackB, int argc)
{
    pb_swap(stackA, stackB, argc);
    ft_sort_numbers_3(stackA, stackB, argc);
    pa_swap(stackA, stackB, argc);
}

void    ft_sort_numbers_5(int *stackA, int *stackB, int argc)
{
        pb_swap(stackA, stackB, argc);
        ft_sort_numbers_4(stackA, stackB, argc);
        pa_swap(stackA, stackB, argc);
}

/*void    ft_sort_5_less(int *stackA, int *stackB, int argc)
{
    if (argc - 1 == 2)
        ft_sort_numbers_2(stackA, stackB, argc);
    else if (argc - 1 == 3)
        ft_sort_numbers_3(stackA, stackB, argc);
    else if (argc - 1 == 4)
        ft_sort_numbers_4(stackA, stackB, argc);
    else if (argc - 1 == 5)
        ft_sort_numbers_5(stackA, stackB, argc);
}*/


void	one_two_three_viva_algerie(t_stack *stackA)
{
	renverse_a(stackA);
}

void	two_be_three(t_stack *stackA)
{
	int	pos;

	pos = stackA->pos;
	if (stackA->tab[pos] < stackA->tab[pos + 1]
		&& stackA->tab[pos + 1] < stackA->tab[pos + 2])
		return ;
	if (stackA->tab[pos] < stackA->tab[pos + 1])
	{
		renverse_a(stackA);
		if (stackA->tab[pos] > stackA->tab[pos + 1])
			swap_a(stackA);
	}
	else if (stackA->tab[pos + 1] > stackA->tab[pos + 2])
	{
		swap_a(stackA);
		renverse_a(stackA);
	}
	else
	{
		if (stackA->tab[pos] < stackA->tab[pos + 2])
			swap_a(stackA);
		else
			rotate_a(stackA);
	}
}

void	citroen_c4(t_stack *stackA, t_stack *stackB)
{
	int	pos;

	if (already_try(stackA) == 0)
	{
		push_b(stackA, stackB);
		two_be_three(stackA);
	}
	if (stackA->no_try != 1)
		push_a(stackA, stackB);
	pos = stackA->pos;
	if (stackA->tab[pos] > stackA->tab[pos + 1]
		&& stackA->tab[pos] < stackA->tab[pos + 2])
		swap_a(stackA);
	else if (stackA->tab[pos] > stackA->tab[stackA->size - 2])
		rotate_a(stackA);
	else if (stackA->tab[pos] > stackA->tab[pos + 2]
		&& stackA->tab[pos] < stackA->tab[pos + 3])
	{
		renverse_a(stackA);
		swap_a(stackA);
		rotate_a(stackA);
		rotate_a(stackA);
	}
}

void	five_guys_peanuts(t_stack *stackA, t_stack *stackB)
{	
	while (stackA->pos < 2)
	{
		while (find_min(stackA) >= 2)
			renverse_a(stackA);
		if (find_min(stackA) == stackA->pos + 1)
			swap_a(stackA);
		push_b(stackA, stackB);
	}	
	two_be_three(stackA);
	while (stackA->pos > 0)
		push_a(stackA, stackB);
}
