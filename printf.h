/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:34:29 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 17:23:03 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		check_str(const char *s);
char	input_type(const char *s);
char	*next_arg(const char *s);
char	*specifier_list(char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putpercent(void);
void	ft_putnbr(int n);
void	ft_putnbr_hexa_lower(long n);
void	ft_putnbr_hexa_upper(long n);

#endif