/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:32:02 by armitite          #+#    #+#             */
/*   Updated: 2024/05/19 13:23:59 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	ft_putnbr_base(unsigned long i, char *base)
{
	int	x;

	x = 0;
	if (i >= ft_strlen(base))
		x += ft_putnbr_base(i / ft_strlen(base), base);
	x += ft_putchar(base[i % ft_strlen(base)]);
	return (x);
}
