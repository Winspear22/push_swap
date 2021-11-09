/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:45:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 19:01:49 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_5_more(int argc, t_stack *stacka,
	t_stack *stackb, t_stack *stackc)
{
	ft_sort_ten_and_more(stacka, stackb, stackc);
}

void	ft_sort_5_less(int argc, t_stack *stacka,
		t_stack *stackb, t_stack *stackc)
{	
	if (argc == 2)
		ft_sort_two(stacka);
	else if (argc == 3)
		ft_sort_three(stacka);
	else if (argc == 4)
		ft_sort_four(stacka, stackb);
	else if (argc == 5)
		ft_sort_five(stacka, stackb);
}

void	ft_init_all_stack(t_stack *stacka, t_stack *stackb,
	int argc, char **argv)
{
	ft_init_stacka(stacka, argc);
	ft_init_stackb(stackb, argc);
	ft_mem_init_stacka(stacka, argv);
	ft_mem_init_stackb(stackb);
}

void	ft_init_stack_c(t_stack *stackc, int argc, char **argv)
{
	ft_init_stackc(stackc, argc);
	ft_mem_init_stacka(stackc, argv);
}

int	main(int argc, char **argv)
{
	t_stack	stacka;
	t_stack	stackb;
	t_stack	stackc;

	if (ft_check_all(argc, argv) == 0)
		return (0);
	ft_init_all_stack(&stacka, &stackb, argc, argv);
	ft_init_stack_c(&stackc, argc, argv);
	if (argc - 1 <= 5)
		ft_sort_5_less(argc - 1, &stacka, &stackb, &stackc);
	else if (argc - 1 >= 5)
		ft_sort_5_more(argc - 1, &stacka, &stackb, &stackc);
	ft_free_triple_tab(&stacka, &stackb, &stackc);
	return (0);
}
