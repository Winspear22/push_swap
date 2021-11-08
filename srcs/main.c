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
	t_stack	stacka;
	t_stack	stackb;
	t_stack	stackc;

	if (ft_check_all(argc, argv) == 0)
		return (0);
	ft_init_stacka(&stacka, argc);
	ft_init_stackc(&stackc, argc);
	ft_init_stackb(&stackb, argc);
	putintab(&stacka, argv);
	init_tab(&stackb);
	putintab(&stackc, argv);
	if (argc - 1 <= 5)
		ft_sort_5_less(argc - 1, &stacka, &stackb, &stackc);
	else if (argc - 1 >= 5)
		ft_sort_5_more(argc - 1, &stacka, &stackb, &stackc);
	/*while(argc - 1)
	{
		printf("STACK A = %ld\n", stacka.tab[i]);
		printf("			|		STACK B = %ld\n", stackb.tab[i]);

		i++;
		argc--;
	}*/
	//ft_free_triple_tab(&stacka, &stackb, &stackc);
	return (0);
}
