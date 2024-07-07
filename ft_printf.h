/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:16:14 by armitite          #+#    #+#             */
/*   Updated: 2024/05/19 13:56:43 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n, int h);
int	ft_putnbr_u(unsigned int n, int fd, int h);
int	ft_putnbr_base(unsigned long i, char *base);
#endif