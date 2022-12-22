/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_from_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:46:56 by aoner             #+#    #+#             */
/*   Updated: 2022/06/03 15:22:26 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_data *p_s)
{
	int	p;

	if (p_s->last_a >= 1)
	{
		p = p_s->seta[p_s->last_a - 1];
		p_s->seta[p_s->last_a - 1] = p_s->seta[p_s->last_a];
		p_s->seta[p_s->last_a] = p;
	}
	if (p_s->ss_count == 0)
		ft_printf("sa\n");
}

void	pa(t_data *p_s)
{
	if (p_s->last_b != 0)
	{
		p_s->seta[p_s->last_a + 1] = p_s->setb[p_s->last_b - 1];
		--p_s->last_b;
		++p_s->last_a;
	}
	ft_printf("pa\n");
}

void	ra(t_data *p_s)
{
	int	last;
	int	a;

	a = p_s->last_a;
	last = p_s->seta[p_s->last_a];
	if (p_s->last_a >= 1)
	{
		while (a >= 1)
		{
			p_s->seta[a] = p_s->seta[a - 1];
			--a;
		}
		p_s->seta[a] = last;
	}
	if (p_s->rr_count == 0)
		ft_printf("ra\n");
}

void	rra(t_data *p_s)
{
	int	first;
	int	i;

	i = 0;
	first = p_s->seta[i];
	if (p_s->last_a >= 1)
	{
		while (i < p_s->last_a)
		{
			p_s->seta[i] = p_s->seta[i + 1];
			i++;
		}
		p_s->seta[i] = first;
	}
	if (p_s->rrr_count == 0)
		ft_printf("rra\n");
}
