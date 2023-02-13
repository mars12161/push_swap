/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:12:56 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/20 15:18:46 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "Libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_printchar(int c);
int		ft_printperc(void);
int		ft_printhex(unsigned long long num, const char format);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int i);
void	ft_writehex(unsigned long long num, const char format);
int		ft_printptr(unsigned long long ptr);

#endif