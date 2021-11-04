/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:43:24 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 16:37:48 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_nb_arg(int argc)
{
    if (argc - 1 < 2)
    {
        ft_putstr_fd("Erreur, il n'y a pas assez d'arguments.\n", 0);
		return (0);
    }
    return (1);
}

int check_alpha(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            if (ft_isdigit(argv[i][j]) == 0)
            {
                ft_putstr_fd("Erreur, il y'a une lettre.\n", 0);
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int check_double(char **argv, int argc)
{
    int i;
    int j;
    int k;
    int l;

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
                ft_putstr_fd("Erreur, il y'a un doublon.\n", 0);
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

int ft_check_all(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int l;
    int m;

    k = check_alpha(argv);
    i = check_double(argv, argc);
    j = check_nb_arg(argc);
    l = ft_check_int_max(argv, argc);
    m = ft_check_sort(argv, argc);
    if (k == 0 || i == 0 || j == 0 || l == 0 || m == 0)
        return (0);
    return (1);
}