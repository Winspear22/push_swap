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


int     check_nb_arg(int argc);
int     check_alpha(char **argv);
int     check_double(char **argv, int argc);
int     ft_check_all(int argc, char **argv);

int     ft_check_int_max(char **argv, int argc);
int     ft_check_sort(char **argv, int argc);

int    *sa_swap(int *stackB, int argc);
//void	swap_a(t_stack *stackA);

int    *sb_swap(int *stackB, int argc);
//void	swap_b(t_stack *t_stackb);
int    *ss_swap(int *stackA, int *stackB, int argc);
//void	double_swap(t_stack *stackA, t_stack *t_stackb);


int     *pa_swap(int *stackA, int *stackB, int argc);
//void	push_a(t_stack *stackA, t_stack *t_stackb);
int     *pb_swap(int *stackA, int *stackB, int argc);
//void	push_b(t_stack *stackA, t_stack *t_stackb);
int    *ra_swap(int *stackA, int *stackB, int argc);
//void	rotate_a(t_stack *stackA);
//void	rotate_a_sp(t_stack *stackA);

int    *rb_swap(int *stackA, int *stackB, int argc);
//void	rotate_b(t_stack *stackB);

int    *rr_swap(int *stackA, int *stackB, int argc);
//void	double_rotate(t_stack *stackA, t_stack *stackB);


int    *rra_swap(int *stackA, int *stackB, int argc);
//void	renverse_a(t_stack *t_stacka);

int    *rrb_swap(int *stackA, int *stackB, int argc);
//void	renverse_b(t_stack *t_stackb);

int    *rrr_swap(int *stackA, int *stackB, int argc);
//void	double_renverse(t_stack *t_stacka, t_stack *t_stackb);


void	ft_init_stackA(t_stack *stackA, int argc);
void	ft_init_stackB(t_stack *stackB, int argc);
void	ft_init_stackC(t_stack *stackC, int argc);
void	putintab(t_stack *stackA, char **tab);
void	init_tab(t_stack *stackB);

void    ft_free_stack(int *stackA, int argc);

void    ft_sort_numbers_2(int *stackA, int *stackB, int argc);
void    ft_sort_numbers_3(int *stackA, int *stackB, int argc);
void    ft_sort_numbers_4(int *stackA, int *stackB, int argc);
void	ft_sort_5_more(int argc, t_stack *stackA, t_stack *stackB, t_stack *stackC);
void    ft_sort_5_less(int argc, t_stack *stackA, t_stack *stackB, t_stack *stackC);


long int	ft_atoi_2(const char *str, t_stack *t_a);

void    ft_free_double_tab(int *stackA, int *stackB);
void    ft_free_single_tab(int *stack);


void		swap_a(t_stack *t_stacka);
void		swap_b(t_stack *t_stackb);
void		double_swap(t_stack *t_stacka, t_stack *t_stackb);
void		push_a(t_stack *t_stacka, t_stack *t_stackb);
void		push_b(t_stack *t_stacka, t_stack *t_stackb);

void		rotate_a(t_stack *t_stacka);
void		rotate_a_sp(t_stack *t_stacka);
void		rotate_b(t_stack *t_stackb);
void		double_rotate(t_stack *t_stacka, t_stack *t_stackb);

void		renverse_a(t_stack *t_stacka);
void		renverse_b(t_stack *t_stackb);
void		double_renverse(t_stack *t_stacka, t_stack *t_stackb);

void		ft_sort_two(t_stack *t_stacka);
void		ft_sort_three(t_stack *t_stacka);
void		ft_sort_four(t_stack *t_stacka, t_stack *t_stackb);
void		ft_sort_five(t_stack *t_stacka, t_stack *t_stackb);

void	ft_init_stack_all(t_stack stackA, t_stack stackB, int argc, char **argv);

void	ten_belles(t_stack *t_stacka, t_stack *t_stackb, t_stack *t_ghost);
void	insert_inspi_here(t_stack *t_a, t_stack *t_b);
void	star_on_the_top(t_stack *t_a);
void	push_or_not_push_thats_the_question(t_stack *t_a, t_stack *t_b);
void	rb_or_rrb_thats_the_question(t_stack *t_a, t_stack *t_b);
void	ra_or_rra_thats_the_question(t_stack *t_a, t_stack *t_b);


int		is_the_nain_of_stack(t_stack *t_stack, int nbr);
int		is_the_warrior_of_stack(t_stack *t_stack, int nbr);
int		find_max(t_stack *t_stack);

void	i_love_renverse_you(t_stack *t_a, t_stack *t_b);
void	i_love_rotate_you(t_stack *t_a, t_stack *t_b);
void	this_is_my_choice(t_stack *t_a, t_stack *t_b);
void	i_dont_know_choose_between_two_beauties(t_stack *t_a, int a);
int		find_min(t_stack *t_stack);
int	already_try(t_stack *t_stack);

void	the_best_coup_on_bed(t_stack *t_a, t_stack *t_b);
int	the_best_coup_on_stacka(t_stack *t_a, t_stack *t_b, int d, int c);
int	to_have_son_count_on_bed(t_stack *t_a, int med_a, int d);
int	the_best_coup_on_stackb(t_stack *t_b, int c);
void	are_you_the_super_count(t_stack *t_b, int count, int c);

void	push_b_only_bads(t_stack *t_a, t_stack *t_b, t_stack *t_g);




#endif
