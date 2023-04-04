/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:40:30 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 17:23:55 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//ein Character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//ein String
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

//ein Prozentzeichen
void	ft_putpercent(void)
{
	write(1, "%%", 1);
}
