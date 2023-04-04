/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skunert <skunert@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:51:01 by skunert           #+#    #+#             */
/*   Updated: 2023/04/04 16:44:07 by skunert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// wie viele specifiers sind im string
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

//welchen specifier habe ich als nachstes
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

//springe zum nachsten specifier
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

//Liste mit allen specifiern
char *specifier_list(char *s)
{
	int		i;
	char	*tmp_buff;

	i = 0;
	tmp_buff = calloc(check_str(s) + 1, sizeof(char));
	while (s != NULL)
	{
		tmp_buff[i] = input_type(s);
		s = next_arg(s);
		i++;
	}
	tmp_buff[i - 1] = '\0';
	return (tmp_buff);
}

void	convert_specifiers(char *s, char *list_of_speci)
{

}
