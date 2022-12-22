/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:40:35 by aoner             #+#    #+#             */
/*   Updated: 2022/05/30 16:40:35 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_pointer(unsigned long long c, int *count)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_put_pointer(c / 16, count);
		ft_put_pointer(c % 16, count);
	}
	else
		*count += ft_putcharp(base[c], 1);
}
