/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:40:46 by aoner             #+#    #+#             */
/*   Updated: 2022/05/30 16:40:46 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrp(int c, int *count)
{
	long int	k;

	k = c;
	if (k < 0)
	{
		*count += write(1, "-", 1);
		k *= -1;
	}
	if (k > 9)
	{
		ft_putnbrp(k / 10, count);
		ft_putnbrp(k % 10, count);
	}
	else
		*count += ft_putcharp(k + 48, 1);
}
