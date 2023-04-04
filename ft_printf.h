/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:34:29 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 12:55:54 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		check_str(const char *s);
char	input_type(const char *s);
char	*next_arg(const char *s);
char 	*specifier_list(char *s);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putpercent();

#endif