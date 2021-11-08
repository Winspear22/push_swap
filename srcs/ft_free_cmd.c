/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:06:09 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/08 21:06:11 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_free_triple_tab(t_stack *stacka, t_stack *stackb, t_stack *stackc)
{
    free(stacka->tab);
	free(stackb->tab);
	free(stackc->tab);
}