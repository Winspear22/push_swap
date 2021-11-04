/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:01:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 16:57:00 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_check_int_max(char **argv, int argc)
{
    int i;
    long k;

    i = 1;
    k = 0;
    while (argv[i])
    {
        k = ft_atoi(argv[i]);
        if (k > 2147483647 || k < -2147483648)
        {
            ft_putstr_fd("Erreur, int min/max dépassé.\n", 0);
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_check_sort(char **argv, int argc)
{
    int i;
    int j;
    int k;

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
    ft_putstr_fd("Erreur, arguments déjà triés.\n", 0);
    return (0);
}