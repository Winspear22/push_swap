/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:09 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 18:58:58 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_triple_tab(t_stack *stacka, t_stack *stackb, t_stack *stackc)
{
	free(stacka->tab);
	free(stackb->tab);
	free(stackc->tab);
}

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
