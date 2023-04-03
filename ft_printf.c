/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:31:07 by skunert           #+#    #+#             */
/*   Updated: 2023/04/03 13:15:02 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

int	check_str(const char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] != '\0' && strchr("cspdiuxX%%", s[i + 1]) != 0)
				count++;
		}
		i++;
	}
	return (count);
}

char	input_type(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] != '\0' && strchr("cspdiuxX%%", s[i + 1]) != 0)
				return (s[i + 1]);
		}
		i++;
	}
	return ('0');
}

char	*next_arg(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			if (s[i + 1] != '\0' && strchr("cspdiuxX%%", s[i + 1]) != 0
				&& s[i + 2] != '\0')
				return ((char *)s + (i + 2));
		}
		i++;
	}
	return (NULL);
}

int ft_printf(const char *s, ...)
{
	int	amount_args;
	int	i;
	int	x;
	va_list ptr;

	amount_args = check_str(s);
	i = 0;
	if (amount_args == 0)
		return (printf("%s\n", s), strlen(s));
	va_start(ptr, s);
	while (i < amount_args)
	{
		if (input_type(s) == 'd')
			x = va_arg(ptr, int);
		i++;
	}
	va_end(ptr);
	return (strlen(s));
}

int main(void)
{
	printf("%d\n", ft_printf("Hasl%dlo", 6));
	return (0);
}