/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:40:21 by skunert           #+#    #+#             */
/*   Updated: 2023/04/05 10:09:54 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//Nummer ausgeben
void	ft_putnbr(int n, int *ret_len)
{
	long long int	nbr;
	char			c;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-', ret_len);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10, ret_len);
		ft_putnbr(nbr % 10, ret_len);
	}
	else
	{
		c = nbr + '0';
		ft_putchar(c, ret_len);
	}
}

//Hexadezimalzahl mit kleinen Buchstaben
void	ft_putnbr_hexa_lower(long n, int *ret_len)
{
	char	*s;
	char	tmp_s[10];
	int		i;
	int		tmp;

	s = "0123456789abcdef";
	i = 0;
	while (n != 0)
	{
		tmp = n % 16;
		n = n / 16;
		tmp_s[i] = s[tmp];
		i++;
	}
	while (i--)
		ft_putchar(tmp_s[i], ret_len);
}

//Hexadezimalzahl mit großen Buchstaben
void	ft_putnbr_hexa_upper(long n, int *ret_len)
{
	char	*s;
	char	tmp_s[10];
	int		i;
	int		tmp;

	s = "0123456789ABCDEF";
	i = 0;
	while (n != 0)
	{
		tmp = n % 16;
		n = n / 16;
		tmp_s[i] = s[tmp];
		i++;
	}
	while (i--)
		ft_putchar(tmp_s[i], ret_len);
}
