/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:23:23 by leiamart          #+#    #+#             */
/*   Updated: 2024/06/06 17:55:43 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(char const *string, ...);
int	ft_putstr(char *str);
int	ft_putchar(char a);
int	ft_puthex(unsigned long long n, char c);
int	ft_putnbr(int n);
int	ft_putptr(uintptr_t n);
int	ft_putunsigned(unsigned int n);

#endif
