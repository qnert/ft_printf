/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:34:29 by skunert           #+#    #+#             */
/*   Updated: 2023/04/05 07:52:47 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void	ft_check_specifiers(char c, int x);
int		ft_printf(const char *s, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putpercent(void);
void	ft_putnbr(int n);
void	ft_putnbr_hexa_lower(long n);
void	ft_putnbr_hexa_upper(long n);

#endif