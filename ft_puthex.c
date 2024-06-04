/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:06:13 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/30 19:46:04 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned long long n, char c)
{
unsigned long long	i;

	i = 0;
	if (n >= 16)
	i += ft_puthex (n / 16, c);
	if (c == 'x')
	i += ft_putchar ("0123456789abcdef"[n % 16]);
	if (c == 'X')
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	i++;
	return (i);
}