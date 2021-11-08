/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:05:53 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:06:04 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_int_max(char **argv, int argc)
{
	int			i;
	long		k;
	long long	j;

	i = 1;
	k = 0;
	while (argv[i])
	{
		k = ft_atoi(argv[i]);
		j = ft_strlen(argv[i]);
		if (k > 2147483647 || k < -2147483648 || j > 11)
		{
			ft_putstr_fd("Error\n", STDERR_FILENO);
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_sort(char **argv, int argc)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	if (argc == 2)
		return (1);
	while (i < argc - 1)
	{
		k = ft_atoi(argv[i]);
		j = ft_atoi(argv[i + 1]);
		if (k > j)
			return (1);
		i++;
	}
	return (0);
}
