/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lessthansix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:12:34 by aoner             #+#    #+#             */
/*   Updated: 2022/06/29 12:11:51 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	leaststep(t_data *p_s)
{
	if (lowestindex(p_s) == 0)
	{
		if (p_s->seta[p_s->last_a] > p_s->seta[p_s->last_a - 1])
		{
			ra(p_s);
			sa(p_s);
		}
		else if (p_s->seta[p_s->last_a] < p_s->seta[p_s->last_a - 1])
			rra(p_s);
	}	
	else if (lowestindex(p_s) == 1)
	{
		if (p_s->seta[p_s->last_a] > p_s->seta[p_s->last_a - 2])
			ra(p_s);
		else if (p_s->seta[p_s->last_a] < p_s->seta[p_s->last_a - 2])
			sa(p_s);
	}
	else if (lowestindex(p_s) == 2)
	{
		sa(p_s);
		ra(p_s);
	}
}

void	lowestgoesup(t_data *p_s)
{
	int	i;

	lowestindex(p_s);
	i = p_s->lowestindex;
	if (i == p_s->last_a - 1)
		sa(p_s);
	else if (i < ((p_s->last_a + 1) / 2))
	{
		while (i >= 0)
		{	
			rra(p_s);
			i--;
		}
	}
	else
	{
		while (i != p_s->last_a)
		{
			ra(p_s);
			i++;
		}
	}		
}

void	lessthansix(t_data *p_s)
{
	int	pbcount;

	pbcount = 0;
	while (sort_ctrl(p_s) == 0)
	{
		if (p_s->last_a == 2)
			leaststep(p_s);
		lowestgoesup(p_s);
		if (sort_ctrl(p_s) == 1)
			break ;
		pb(p_s);
		pbcount++;
	}
	while (pbcount > 0)
	{
		pa(p_s);
		pbcount--;
	}
}
