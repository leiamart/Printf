/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:03:05 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/29 21:16:16 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t n)
{
	size_t	i;

	i = 0;

	if (!n)
		return(ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthex(n, 'x');
	return (i);
}
