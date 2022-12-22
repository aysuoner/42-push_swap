/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:54:59 by aoner             #+#    #+#             */
/*   Updated: 2022/06/22 10:55:22 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	type_one(t_data *p_s)
{
	ft_printf("Error\nType:1 A parameter contains only NULL!");
	free(p_s);
	exit(1);
}

void	type_two(t_data *p_s)
{
	ft_printf("Error\nType:2 A parameter contains ONLY SPACES char");
	free(p_s);
	exit(1);
}

void	type_three(char **argv, t_data *p_s)
{
	if (argv[p_s->d][p_s->i] == ' ' || argv[p_s->d][p_s->i] == '\0')
		p_s->f_argc++;
	else if (ft_isdigit(argv[p_s->d][p_s->i]) == 0)
	{
		ft_printf("Error\nType:3 A parameter contains an UNWANTED CHAR");
		free(p_s);
		exit(1);
	}
}

void	type_four_five(char **argv, t_data *p_s)
{
	if (ft_isdigit(argv[p_s->d][p_s->i]) == 1)
	{
		p_s->i++;
		if (argv[p_s->d][p_s->i] == ' ' || argv[p_s->d][p_s->i] == '\0')
			p_s->f_argc++;
		else if (ft_isdigit(argv[p_s->d][p_s->i]) == 0)
		{
			ft_printf("Error\nType:4 A parameter contains an UNWANTED CHAR!");
			free(p_s);
			exit(1);
		}
	}
	else
	{
		ft_printf("Error\nType:5 A parameter does not contain an \
integer value AFTER the (+)(-) SYMBOL!");
		free(p_s);
		exit(1);
	}
}

void	type_six(t_data *p_s)
{
	ft_printf("Error\nType:6 A parameter contains an UNWANTED CHARACTER!!");
	free(p_s);
	exit(1);
}
