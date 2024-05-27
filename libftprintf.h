/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leiamart <leiamart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:23:23 by leiamart          #+#    #+#             */
/*   Updated: 2024/05/27 21:49:18 by leiamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"

typedef struct s_list
{
	void		*content;
	struct	s_list	*next;
}	t_list;


int	ft_printf(char const *, ...);
void	ft_putstr(char *str);
void	ft_putchar(char a, size_t *c);
int	ft_puthex(unsigned long long n);
int	ft_putnbr(int n, size_t *c);
int	ft_putptr(int ptr);
void    ft_putunsigned(unsigned int n, int *l);








#endif
