/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoner <aoner@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:40:51 by aoner             #+#    #+#             */
/*   Updated: 2022/05/30 16:40:51 by aoner            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrp(const char *str, int fd)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
	{
		count += ft_putstrp("(null)", fd);
		return (count);
	}
	while (str[i])
	{
		count += write(fd, &str[i], 1);
		i++;
	}
	return (count);
}
