/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:43:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 20:48:09 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nb_arg(int argc)
{
	if (argc == 1)
		return (0);
	else if (argc - 1 < 2)
		return (0);
	return (1);
}

int	check_alpha(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 || (argv[i][j] == '-'
						&& argv[i][j + 1] == '-'))
			{
				ft_putstr_fd("Error\n", STDERR_FILENO);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	check_double(char **argv, int argc)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 1;
	k = 0;
	l = 1;
	while (k < argc - 1)
	{
		j = ft_atoi(argv[i]);
		while (i < argc - 1)
		{
			if (j == ft_atoi(argv[i + 1]))
			{
				ft_putstr_fd("Error\n", STDERR_FILENO);
				return (0);
			}
			i++;
		}
		i = l + 1;
		l++;
		k++;
	}
	return (1);
}

int	ft_check_all(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	m;

	j = check_nb_arg(argc);
	m = ft_check_sort(argv, argc);
	if (j == 0 || m == 0)
		return (0);
	k = check_alpha(argv);
	i = check_double(argv, argc);
	j = check_nb_arg(argc);
	l = ft_check_int_max(argv, argc);
	if (k == 0 || i == 0 || j == 0 || l == 0)
		return (0);
	return (1);
}
