/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_ctrl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:07:51 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 10:48:08 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	duplicate(t_data *p_s)
{
	int	i;

	i = 1;
	while (p_s->last_ax < p_s->last_a && \
	(p_s->last_ax + i <= p_s->last_a) && \
	p_s->seta[p_s->last_ax] != p_s->seta[p_s->last_ax + i])
		i++;
	if (p_s->last_ax < p_s->last_a && (p_s->last_ax + i <= p_s->last_a) \
	&& p_s->seta[p_s->last_ax] == p_s->seta[p_s->last_ax + i++])
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nDuplicate int!");
		exit(1);
	}
}
