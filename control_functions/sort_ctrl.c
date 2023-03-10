/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ctrl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 19:57:56 by aoner             #+#    #+#             */
/*   Updated: 2022/06/03 15:22:18 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_ctrl(t_data *p_s)
{
	int	x;

	x = p_s->last_a;
	while (x >= 1)
	{
		if (p_s->seta[x] < p_s->seta[x - 1])
		{
			x--;
		}
		else
			return (0);
	}
	return (1);
}
