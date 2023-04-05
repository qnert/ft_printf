/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:31:07 by skunert           #+#    #+#             */
/*   Updated: 2023/04/05 07:52:10 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_check_specifiers(char c, int x)
{
	if (c == 'c')
		ft_putchar(x);
	if (c == 'd')
		ft_putnbr(x);
	if (c == 'i')
		ft_putnbr(x);
	if (c == 'x')
		ft_putnbr_hexa_lower(x);
	if (c == 'X')
		ft_putnbr_hexa_upper(x);
}

int	ft_printf(const char *s, ...)
{
	int		x;
	int		i;
	va_list	ptr;

	i = 0;
	va_start(ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%' || (s[i] == '%' && strchr("cspdiuxX%%", s[i + 1]) == 0))
			ft_putchar(s[i]);
		else if (strchr("cspdiuxX%%", s[++i]) != 0)
		{
			x = va_arg(ptr, int);
			ft_check_specifiers(s[i], x);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(ptr);
	return (strlen(s));
}

int	main(void)
{
	ft_printf("Hulk-%clo %d\n", 'k', 1000);
}
