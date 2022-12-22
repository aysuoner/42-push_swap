/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   between_5_160.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:36:22 by aoner             #+#    #+#             */
/*   Updated: 2022/06/21 12:44:00 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_average(t_data *p_s)
{
	int	total;
	int	i;

	total = 0;
	i = p_s->last_a;
	while (i >= 0)
	{
		total = total + p_s->seta[i];
		i--;
	}
	p_s->average = total / (p_s->last_a + 1);
}

void	fill_setb(t_data *p_s)
{
	int	i;

	while (p_s->last_a > 1)
	{
		set_average(p_s);
		i = p_s->last_a;
		while (i >= 0 && p_s->last_a > 1)
		{	
			if (p_s->seta[p_s->last_a] < p_s->average)
				pb(p_s);
			else if (p_s->seta[p_s->last_a] >= p_s->average)
				ra(p_s);
			i--;
		}
	}
	if (p_s->last_a == 1)
	{
		if (p_s->seta[1] > p_s->seta[0])
			sa(p_s);
	}
}

void	go_back_seta(t_data *p_s)
{
	int	i;

	biggestindex_b(p_s);
	while (p_s->last_b > 0)
	{
		biggestindex_b(p_s);
		i = p_s->biggestindex_b;
		if (i < (p_s->last_b) / 2)
		{
			while (i-- >= 0)
				rrb(p_s);
			pa(p_s);
		}
		else
		{
			while (i++ != p_s->last_b - 1)
				rb(p_s);
			pa(p_s);
		}
	}
}

void	between_5_160(t_data *p_s)
{
	fill_setb(p_s);
	go_back_seta(p_s);
}
