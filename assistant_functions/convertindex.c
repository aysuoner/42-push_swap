/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:13:11 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 15:12:07 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_seta_copy(t_data *p_s)
{
	p_s->setacopy = ft_calloc(sizeof (int), p_s->last_a + 1);
	if (!(p_s->setacopy))
	{
		free(p_s->seta);
		free(p_s->setb);
		free(p_s);
		exit(1);
	}
}

void	convertindex(t_data *p_s)
{
	int	k;
	int	l;
	int	indxcalcu;
	int	setcount;

	p_s->i = 0;
	k = 0;
	create_seta_copy(p_s);
	setcount = p_s->last_a;
	while (k <= p_s->last_a)
	{
		indxcalcu = 0;
		l = 0;
		while (l <= p_s->last_a)
		{
			if (p_s->seta[setcount - p_s->i] > p_s->seta[l])
				indxcalcu++;
			l++;
		}
		p_s->setacopy[p_s->last_a - k] = indxcalcu;
		p_s->i++;
		k++;
	}
	free(p_s->seta);
	p_s->seta = p_s->setacopy;
}
