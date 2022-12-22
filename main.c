/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:34:19 by aoner             #+#    #+#             */
/*   Updated: 2022/06/29 10:26:58 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_seta_setb(t_data *p_s)
{
	p_s->seta = malloc(sizeof(int) * p_s->f_argc - 1);
	if (!p_s->seta)
	{
		free(p_s);
		exit(1);
	}
	p_s->setb = malloc(sizeof(int) * p_s->f_argc - 1);
	if (!p_s->setb)
	{
		free(p_s->seta);
		free(p_s);
		exit(1);
	}
}

void	main_two(t_data *p_s)
{
	convertindex(p_s);
	lowestindex(p_s);
	biggestindex_a(p_s);
	if (sort_ctrl(p_s) == 1)
	{
		free(p_s->setb);
		free(p_s->seta);
		free(p_s);
		exit(0);
	}
	if (p_s->f_argc <= 7)
		lessthansix(p_s);
	else if (7 < p_s->f_argc && p_s->f_argc <= 161)
		between_5_160(p_s);
	else if (p_s->f_argc > 161)
		radix(p_s);
	free(p_s->seta);
	free(p_s->setb);
	free(p_s);
	exit (0);
}

int	main(int argc, char **argv)
{
	t_data	*p_s;

	p_s = ft_calloc(sizeof(t_data), 1);
	if (!p_s)
		exit(1);
	int_ctrl(argc, argv, p_s);
	create_seta_setb(p_s);
	from_char_to_int(argv, p_s);
	if (p_s->f_argc == 1 || p_s->f_argc == 2)
	{
		free(p_s->seta);
		free(p_s->setb);
		free (p_s);
		exit (0);
	}
	main_two(p_s);
	return (0);
}
