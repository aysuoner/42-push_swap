/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:34:53 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 11:16:17 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_data
{
	int		*seta;
	int		*setb;
	int		f_argc;
	int		last_a;
	int		last_b;
	int		last_ax;
	long	maxmin;
	int		lowestindex;
	int		lowestnum;
	int		biggestindex_a;
	int		biggestindex_b;
	int		biggestnum_a;
	int		biggestnum_b;
	int		ps_count;
	int		setcount;
	int		set;
	int		bit;
	int		*setacopy;
	int		average;
	int		rr_count;
	int		ss_count;
	int		rrr_count;
	int		d;
	int		i;
	int		s;
}t_data;

int		main(int argc, char **argv);
void	create_seta_setb(t_data *p_s);
void	main_two(t_data *p_s);
void	create_seta_copy(t_data *p_s);

//controls
int		int_ctrl(int argc, char **argv, t_data *p_s);
void	because_of_norm(t_data *p_s, char **argv);
void	from_char_to_int(char **argv, t_data *p_s);
void	pos_neg_identify(char **argv, t_data *p_s);
void	replace_with_integer(char **argv, t_data *p_s);
void	duplicate(t_data *p_s);
void	maxmin_int(t_data *p_s);
int		sort_ctrl(t_data *p_s);

//error
void	type_one(t_data *p_s);
void	type_two(t_data *p_s);
void	type_three(char **argv, t_data *p_s);
void	type_four_five(char **argv, t_data *p_s);
void	type_six(t_data *p_s);

//assistant
int		lowestindex(t_data *p_s);
int		biggestindex_a(t_data *p_s);
int		biggestindex_b(t_data *p_s);
void	convertindex(t_data *p_s);

//instructions
void	sa(t_data *p_s);
void	sb(t_data *p_s);
void	ss(t_data *p_s);
void	pb(t_data *p_s);
void	pa(t_data *p_s);
void	ra(t_data *p_s);
void	rb(t_data *p_s);
void	rr(t_data *p_s);
void	rra(t_data *p_s);
void	rrb(t_data *p_s);
void	rrr(t_data *p_s);
void	sb(t_data *p_s);
void	ss(t_data *p_s);

//sorting_algorithms
void	lessthansix(t_data *p_s);
void	leaststep(t_data *p_s);
void	lowestgoesup(t_data *p_s);
void	between_5_160(t_data *p_s);
void	fill_setb(t_data *p_s);
void	set_average(t_data *p_s);
void	go_back_seta(t_data *p_s);
void	radix(t_data *p_s);
void	binary_sorting(t_data *p_s);
int		find_biggestbit(t_data *p_s);

#endif
