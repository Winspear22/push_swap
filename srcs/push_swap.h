/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:40:02 by adaloui           #+#    #+#             */
/*   Updated: 2021/11/09 21:09:44 by adaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	long int		*tab;
	int				size;
	int				pos;
	int				max;
	int				min;
	int				ra;
	int				rra;
	int				rb;
	int				rrb;
	int				rr;
	int				almost_sorted;
	int				max_int;
	int				nb_of_max_int;
	int				count_a;
	int				count_super_a;
	int				count_b;
	int				count_super_b;	
	int				pos_of_max_int;
	int				first_bien_tried;
	int				len_of_long_serie;
	int				pos_of_first_bien_tried;
	long int		*tab_serie;
}	t_stack;

/* ----------------- CHECK_ARGV ----------------- */

int			ft_check_nb_arg(int argc);
int			ft_check_alpha(char **argv);
int			ft_check_double(char **argv, int argc);
int			ft_check_all(int argc, char **argv);
int			ft_check_int_max(char **argv, int argc);
int			ft_check_sort(char **argv, int argc);

/* -----------------   INIT_STACKS ----------------- */

void		ft_init_stacka(t_stack *stacka, int argc);
void		ft_init_stackb(t_stack *stackb, int argc);
void		ft_init_stackc(t_stack *stackc, int argc);
void		ft_mem_init_stacka(t_stack *stacka, char **tab);
void		ft_mem_init_stackb(t_stack *stackb);

/* ----------------- FREE_STACKS ----------------- */

void		ft_free_triple_tab(t_stack *stacka,
				t_stack *stackb, t_stack *stackc);

/* -----------------   COMMANDS   ----------------- */

void		sa_swap(t_stack *stacka);
void		sb_swap(t_stack *stackb);
void		ss_swap(t_stack *stacka, t_stack *stackb);

void		pa_swap(t_stack *stacka, t_stack *stackb);
void		pb_swap(t_stack *stacka, t_stack *stackb);

void		ra_swap(t_stack *stacka);
void		rb_swap(t_stack *stackb);
void		rr_swap(t_stack *stacka, t_stack *stackb);

void		rra_swap(t_stack *stacka);
void		rrb_swap(t_stack *stackb);
void		rrr_swap(t_stack *stacka, t_stack *stackb);

/* -----------------   CMD_INIT_5   ----------------- */

void		ft_sort_two(t_stack *stacka);
void		ft_sort_three(t_stack *stacka);
void		ft_sort_four(t_stack *stacka, t_stack *stackb);
void		ft_sort_five(t_stack *stacka, t_stack *stackb);
void		ft_sort_5_more(int argc, t_stack *stacka,
				t_stack *stackb, t_stack *stackc);
void		ft_sort_5_less(int argc, t_stack *stacka,
				t_stack *stackb, t_stack *stackc);

/* ----------------- CMD_INIT_10   ----------------- */

void		ft_sort_ten_and_more(t_stack *stacka,
				t_stack *stackb, t_stack *stackc);
void		ft_sort_min_to_top(t_stack *stacka, t_stack *stackb);
void		ft_put_min_on_top(t_stack *stacka);
void		ft_push_or_not(t_stack *stacka,
				t_stack *stackb);
void		ft_rb_or_rrb(t_stack *stacka, t_stack *stackb);
void		ft_ra_or_rra(t_stack *stacka, t_stack *stackb);

int			ft_nb_superior_to_tab(t_stack *stacka, int nb);
int			ft_nb_inferior_to_tab(t_stack *stacka, int nb);
int			ft_find_maximum(t_stack *stacka);

void		ft_renverse_stacks(t_stack *stacka, t_stack *stackb);
void		ft_rotate_stacks(t_stack *stacka, t_stack *stackb);
void		ft_choose_rotate_or_renverse(t_stack *stacka, t_stack *stackb);
void		ft_choose_ra_rra_plus(t_stack *stacka, int i);
int			ft_find_minimum(t_stack *stacka);
int			ft_almost_all_sorted(t_stack *stacka);

void		ft_best_count(t_stack *stacka, t_stack *stackb);
int			ft_best_count_stacka(t_stack *stacka,
				t_stack *stackb, int d, int c);
int			ft_count_on_stack(t_stack *stacka, int med_a, int d);
int			ft_best_count_stackb(t_stack *stackb, int c);
void		ft_find_the_max_int(t_stack *stackb, int count, int c);
void		ft_pb_bad_int(t_stack *stacka, t_stack *stackb,
				t_stack *stackc);

/* ----------------- UTIL_ATOI_SPE ----------------- */

long int	ft_atoi_2(const char *str, t_stack *stacka);

#endif
