/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_from_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:09:11 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 10:53:48 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_data *p_s)
{
	int	p;

	if (p_s->last_b > 1)
	{
		p = p_s->setb[p_s->last_b - 2];
		p_s->setb[p_s->last_b - 2] = p_s->setb[p_s->last_b - 1];
		p_s->setb[p_s->last_b - 1] = p;
	}
	if (p_s->ss_count == 0)
		ft_printf("sb\n");
}

void	pb(t_data *p_s)
{
	if (p_s->last_a != -1)
	{
		p_s->setb[p_s->last_b] = p_s->seta[p_s->last_a];
		--p_s->last_a;
		++p_s->last_b;
	}
	ft_printf("pb\n");
}

void	rb(t_data *p_s)
{
	int	last;
	int	b;

	b = p_s->last_b;
	last = p_s->setb[p_s->last_b - 1];
	if (p_s->last_b > 1)
	{
		while (b >= 1)
		{
			p_s->setb[b] = p_s->setb[b - 1];
			--b;
		}
		p_s->setb[b] = last;
	}
	if (p_s->rr_count == 0)
		ft_printf("rb\n");
}

void	rrb(t_data *p_s)
{
	int	first;
	int	i;

	i = 0;
	first = p_s->setb[i];
	if (p_s->last_b > 1)
	{
		while (i < p_s->last_b - 1)
		{
			p_s->setb[i] = p_s->setb[i + 1];
			i++;
		}
		p_s->setb[i] = first;
	}
	if (p_s->rrr_count == 0)
		ft_printf("rrb\n");
}
