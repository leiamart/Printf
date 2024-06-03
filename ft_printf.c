/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:16:58 by leiamart          #+#    #+#             */
/*   Updated: 2024/06/03 15:40:00 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_putformart(char s, va_list *arg, int *c, int *i)
{
	if (s == 's')
		ft_putstr(va_arg(*arg, char *), c);
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(*arg, int), c);
	else if (s == 'u')
		ft_putunsigned(va_arg(*arg, unsigned int), c);
	else if (s == 'x')
		ft_puthex (va_arg(*arg, unsigned long long), c, 'x');
	else if (s == 'X')
		ft_puthex(va_arg(*arg, unsigned long long), c, 'X');
	else if (s == 'p')
		ft_putptr(va_arg(*arg, unsigned long long), c);
	else if (s == '%')
		ft_putchar(va_arg(*arg, '%'), c);
	else
		(*i)--;
}

int	ft_printf(char const *string, ...)
{
	va_list	lst;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(lst, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_putformat(string[i], &lst, &c, &i);
			i++;
		}
		else
		{
			ft_putformat((char) string[i], &c);
			i++;
		}
	}
	va_end(lst);
	return (c);
}
