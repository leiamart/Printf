/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:16:58 by leiamart          #+#    #+#             */
/*   Updated: 2024/06/03 18:48:11 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putformat(char *s, va_list arg)
{
	size_t	i;

	i = 0;
	if (*s == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (*s == 'd')
		i += ft_putdecimal(va_arg(arg, int));
	else if (*s == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (*s == 'u')
		i += ft_putunsigned(va_arg(arg, unsigned int));
	else if (*s == 'x')
		i += ft_puthex (va_arg(arg, unsigned int), 'x');
	else if (*s == 'X')
		i += ft_puthex (va_arg(arg, unsigned int), 'X');
	else if (*s == 'p')
		i += ft_putptr(va_arg(arg, int));
	else if (*s == '%')
		i += ft_putchar('%');
	return ((int)i);
}

int	ft_printf(char const *string, ...)
{
	va_list	lst;
	int		c;

	c = 0;
	va_start(lst, string);
	while (*string != '\0')
	{
		if (*string == '%')
		{
			string++;
			c = c + ft_putformat((char *)string, lst);
			string++;
		}
		else
		{
			c += ft_putchar(*string);
			string++;
		}
	}
	va_end(lst);
	return (c);
}

int main()
{
	int i;
	int	j;

	i = 0;
	j = 0;
	//prueba
	// printf("Hola");
	ft_printf("prueba de ft_print:\n");
	j = ft_printf("myprintf: cadena de caracteres: %s\n", "hola punky");
	i = printf("printf: cadena de caracteres: %s\n", "hola punky");
	printf("printf : %i\nmyprintf : %i\n\n", i, j);


	j = ft_printf("myprintf: puntero: %p\n", (void *) 0x12345678);
	i = printf("printf: puntero: %p\n", (void *) 0x12345678);
	printf("printf : %i\nmyprintf: %i\n\n", i, j);
	
	
	j = ft_printf("myprintf: numero hexadecimal: %x\n", -25463985742);
	i = printf("printf: numero hexadecimal: %lx\n", -25463985742);
	printf("printf : %i\nmyprintf: %i\n\n", i, j);
	
	j = ft_printf("myprintf: numero hexadecimal: %x\n", -254639852);
	i = printf("printf: numero hexadecimal: %x\n", -254639852);

	j = ft_printf("myprintf: numero en formato decimal: %i\n", 2546);
	i = printf("printf: numero en formato decimal: %i\n", 2546);
	printf("printf : %i\nmyprintf: %i\n\n", i, j);
	
	j = ft_printf("myprintf: numero entero: %d\n", 42);
	i = printf("printf: numero entero: %d\n", 42);
	printf("printf : %i\nmyprintf: %i\n\n", i, j);
	
	j = ft_printf("myprintf: unsigned %u\n", 5);
	i = printf("printf: unsigned %u\n", 5);
	printf("printf : %i\nmyprintf: %i\n\n", i, j);
}
