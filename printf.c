/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:31:07 by skunert           #+#    #+#             */
/*   Updated: 2023/04/05 09:57:52 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_specifiers(char c, va_list ptr, int *ret_len)
{
	if (c == 'c')
		ft_putchar(va_arg(ptr, int), ret_len);
	if (c == 's')
		ft_putstr(va_arg(ptr, char *), ret_len);
	if (c == '%')
		ft_putpercent(ret_len);
	// if (c == 'd')
	// 	ft_putnbr(x);
	// if (c == 'i')
	// 	ft_putnbr(x);
	// if (c == 'x')
	// 	ft_putnbr_hexa_lower(x);
	// if (c == 'X')
	// 	ft_putnbr_hexa_upper(x);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		ret_len;
	va_list	ptr;

	i = 0;
	ret_len = 0;
	va_start(ptr, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
			ft_putchar(s[i], &ret_len);
		if (s[i++] == '%')
		{
			ft_check_specifiers(s[i], ptr, &ret_len);
			i++;
		}
	}
	va_end(ptr);
	return (ret_len);
}

// int	main(void)
// {
// 	printf("%d\n", ft_printf("%c", '0'));
// }