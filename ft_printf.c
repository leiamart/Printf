/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:16:58 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/28 21:28:10 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putformat()
{
	if(%c)
	(ft_putchar)va_arg;
	else if (%s)
	(ft_putstr) va_arg;
	else if(%p)
	(ft_putptr) va_arg;
	else if (%d)
	ft_putdec, va_arg;
	else if (%i)
	ft_putnbr, va_arg;
	else if (%u)
	(ft_putunsigned) va_arg;
	else if (%x)
	(ft_puthex)va_arg;
	else if (%X)
	(ft_puthex)va_arg;
	else if (%%)
	(ft_putchar)va_arg;

}

int	ft_printf(char const *, ...)
{
	va_list lst;
	str;
	
	
	
	va_start(lst,str);
	
	
	
	
	
	va_end(lst);
}
