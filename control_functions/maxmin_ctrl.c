/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin_ctrl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:52:37 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 10:43:38 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	maxmin_int(t_data *p_s)
{
	if (p_s->maxmin < -2147483648)
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nMIN int error!");
		exit(1);
	}
	else if (p_s-> maxmin > 2147483647)
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		ft_printf("Error\nMAX int error!");
		exit(1);
	}
}
