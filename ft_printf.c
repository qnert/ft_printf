/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:31:07 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 17:23:41 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <string.h>
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	int		amount_args;
	int		i;
	va_list	ptr;

	amount_args = check_str(s);
	i = 0;
	if (amount_args == 0)
		return (ft_putstr((char *)s), strlen(s));
	va_start(ptr, s);
	while (i < amount_args)
	{
		printf("%d\n", va_arg(ptr, int));
		i++;
	}
	va_end(ptr);
	return (strlen(s));
}

int	main(void)
{
	ft_printf("Hallo", 5, 6, 7, 3, 6);
}
