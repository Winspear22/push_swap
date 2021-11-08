/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaloui <adaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:40:02 by adaloui           #+#    #+#             */
/*   Updated: 2021/10/20 19:41:47 by adaloui          ###   ########.fr       */
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
	int				no_try;
	int				super_count;
	int				nb_of_super_count;
	int				count_a;
	int				count_super_a;
	int				count_b;
	int				count_super_b;	
	int				pos_of_super_count;
	int				first_bien_tried;
	int				len_of_long_serie;
	int				pos_of_first_bien_tried;
	long int		*tab_serie;
	int				for_ra;
	int				for_rra;
	int				for_rb;
	int				for_rrb;
	int				for_rr;
	int				for_rrr;
}	t_stack;

/* ----------------- CHECK_ARGV ----------------- */

int			check_nb_arg(int argc);
int			check_alpha(char **argv);
int			check_double(char **argv, int argc);
int			ft_check_all(int argc, char **argv);
int			ft_check_int_max(char **argv, int argc);
int			ft_check_sort(char **argv, int argc);

/* -----------------   INIT_STACKS ----------------- */

void		ft_init_stacka(t_stack *stacka, int argc);
void		ft_init_stackb(t_stack *stackb, int argc);
void		ft_init_stackc(t_stack *stackc, int argc);
void		putintab(t_stack *stacka, char **tab);
void		init_tab(t_stack *stackb);

/* ----------------- FREE_STACKS ----------------- */

void		ft_free_triple_tab(t_stack *stacka, t_stack *stackb, t_stack *stackc);

/* -----------------   COMMANDS   ----------------- */

void		sa_swap(t_stack *stacka);
void		sb_swap(t_stack *stackb);
void		ss_swap(t_stack *stacka, t_stack *stackb);

void		pa_swap(t_stack *stacka, t_stack *stackb);
void		pb_swap(t_stack *stacka, t_stack *stackb);

void		ra_swap(t_stack *stacka);
void		ra_swap_sp(t_stack *stacka);
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
				t_stack *stackb, t_stack *t_ghost);
void		insert_inspi_here(t_stack *t_a, t_stack *t_b);
void		star_on_the_top(t_stack *t_a);
void		push_or_not_push_thats_the_question(t_stack *t_a, t_stack *t_b);
void		rb_or_rrb_thats_the_question(t_stack *t_a, t_stack *t_b);
void		ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b);

int			is_the_nain_of_stack(t_stack *t_stack, int nbr);
int			is_the_warrior_of_stack(t_stack *t_stack, int nbr);
int			find_max(t_stack *t_stack);

void		i_love_renverse_you(t_stack *t_a, t_stack *t_b);
void		i_love_rotate_you(t_stack *t_a, t_stack *t_b);
void		this_is_my_choice(t_stack *t_a, t_stack *t_b);
void		i_dont_know_choose_between_two_beauties(t_stack *t_a, int a);
int			find_min(t_stack *t_stack);
int			already_try(t_stack *t_stack);

void		the_best_coup_on_bed(t_stack *t_a, t_stack *t_b);
int			the_best_coup_on_stacka(t_stack *t_a, t_stack *t_b, int d, int c);
int			to_have_son_count_on_bed(t_stack *t_a, int med_a, int d);
int			the_best_coup_on_stackb(t_stack *t_b, int c);
void		are_you_the_super_count(t_stack *t_b, int count, int c);
void		pb_swap_only_bads(t_stack *t_a, t_stack *t_b, t_stack *t_g);

/* ----------------- UTIL_ATOI_SPE ----------------- */

long int	ft_atoi_2(const char *str, t_stack *stacka);

#endif
