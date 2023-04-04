/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:40:21 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 16:48:57 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int n)
{
	long long int	nbr;
	char			c;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr_hexa_lower(long n)
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
	while(i--)
		ft_putchar(tmp_s[i]);
}

void	ft_putnbr_hexa_upper(long n)
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
	while(i--)
		ft_putchar(tmp_s[i]);
}

