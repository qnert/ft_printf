/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:31:07 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 12:51:32 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int ft_printf(const char *s, ...)
{
	char	*buff;
	int		amount_args;
	int		i;
	va_list ptr;

	amount_args = check_str(s);
	i = 0;
	if (amount_args == 0)
		return (printf("%s\n", s), strlen(s));
	va_start(ptr, s);
	while (i < amount_args)
	{
		read_args(va_arg(ptr, int));
		i++;
	}
	va_end(ptr);
	return (strlen(s));
}