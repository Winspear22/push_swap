/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:45:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 19:44:22 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	ft_sort_5_more(int argc, t_stack *stackA, t_stack *stackB, t_stack *stackC)
{
	if (argc > 5)
		ten_belles(stackA, stackB, stackC);
}*/

long int	ft_atoi_2(const char *str, t_stack *t_a)
{
	int			i;
	long int	a;
	int			signe;

	i = 0;
	a = 0;
	signe = 1;
	if (str[i] == '\0')
	{
		ft_putstr_fd("Error\n", 2);
		free(t_a->tab);
		exit(EXIT_FAILURE);
	}
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		a = a * 10 + str[i++] - 48;
	return (a * signe);
}

int	main(int argc, char **argv)
{

	t_stack	stackA;
	t_stack	stackB;
	t_stack	stackC;
	int i = 0;

	if (ft_check_all(argc, argv) == 0)
		return (0);
	ft_init_stackA(&stackA, argc);
	ft_init_stackC(&stackC, argc);
	ft_init_stackB(&stackB, argc);
	putintab(&stackA, argv);
	init_tab(&stackB);
	putintab(&stackC, argv);
	if (argc - 1 <= 5)
		ft_sort_5_less(argc - 1, &stackA, &stackB, &stackC);
	/*else if (argc - 1 >= 5)
		ft_sort_5_more(argc - 1, &stackA, &stackB, &stackC);*/
	
	while(argc - 1)
	{
		printf("STACK A = %ld\n", stackA.tab[i]);
		printf("			|		STACK B = %ld\n", stackB.tab[i]);

		i++;
		argc--;
	}
	//ft_free_double_tab(stackA, stackB);*/
	return (0);
}

/*	sa_swap(stackA, argc);
	sb_swap(stackB, argc);
	ss_swap(stackA, stackB, argc);
	pb_swap(stackA, stackB, argc);
	ra_swap(stackA, stackB, argc);
	rb_swap(stackA, stackB, argc);
	rr_swap(stackA, stackB, argc);
	rra_swap(stackA, stackB, argc);
	rrb_swap(stackA, stackB, argc);
	rrr_swap(stackA, stackB, argc);
	i = 1;
	j = 0;
	while(i <= argc - 1)
	{
		printf("place n* %d STACK A = %d\n", k, stackA[j]);
		printf("place n* %d STACK B = %d\n", k, stackB[j]);
		i++;
		j++;
		k++;
	ft_free_stack(stackA, argc);
	i = 1;
	j = 0;
	while(i <= argc - 1)
	{
		printf("STACK A = %d\n", stackA[j]);
	//	printf("STACK B = %d\n", stackB[j]);
		i++;
		j++;
		k++;
	}
	}*/