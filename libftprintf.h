/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:23:23 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/28 21:23:42 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"

int	ft_printf(char const *, ...);
int	ft_putstr(char *str);
void	ft_putchar(char a, size_t *c);
int	ft_puthex(unsigned long long cnar c);
int	ft_putnbr(int n, size_t *c);
int	ft_putptr(unsigned long long n);
void    ft_putunsigned(unsigned int n, int *c);

#endif
