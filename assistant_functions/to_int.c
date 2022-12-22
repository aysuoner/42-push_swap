/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:13:04 by aoner             #+#    #+#             */
/*   Updated: 2022/06/21 09:39:59 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pos_neg_identify(char **argv, t_data *p_s)
{
	if (argv[p_s->d][p_s->i] == ' ')
		p_s->i++;
	else if (argv[p_s->d][p_s->i] == '+' || argv[p_s->d][p_s->i] == '-')
	{
		if (argv[p_s->d][p_s->i] == '-')
			p_s->s *= -1;
		else
			p_s->s = 1;
		p_s->i++;
	}
}

void	replace_with_integer(char **argv, t_data *p_s)
{
	long	res;

	res = 0;
	p_s->s = 1;
	pos_neg_identify(argv, p_s);
	while (ft_isdigit(argv[p_s->d][p_s->i]) == 1)
	{
		res = (res * 10) + (argv[p_s->d][p_s->i] - 48);
		p_s->i++;
		if (argv[p_s->d][p_s->i] == ' ' || argv[p_s->d][p_s->i] == '\0')
		{
			p_s->maxmin = res * p_s->s;
			maxmin_int(p_s);
			p_s->seta[p_s->last_ax] = res * p_s->s;
			duplicate(p_s);
			p_s->last_ax--;
		}
	}
	p_s->s = 1;
	res = 0;
}

void	from_char_to_int(char **argv, t_data *p_s)
{
	p_s->d = 1;
	p_s->last_a = p_s->f_argc - 2;
	p_s->last_ax = p_s->last_a;
	while (argv[p_s->d])
	{
		p_s->i = 0;
		while (argv[p_s->d][p_s->i])
			replace_with_integer(argv, p_s);
		p_s->d++;
	}
}
