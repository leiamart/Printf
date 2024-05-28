/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:03:05 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/28 21:03:38 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(unsigned long long n)
{
	size_t i;

	i  = 0;

	i += ft_putstr("0x");
	i += ft_puthex(n,'x');
	return (i);
}
