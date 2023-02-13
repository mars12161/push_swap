/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:23:11 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/18 15:06:54 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* static int	ft_ptr_len(unsigned long long u)
{
	int	len;

	len = 0;
	while (u > 0)
	{
		u = u / 16;
		len++;
	}
	return (len);
} */

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		len += ft_printhex(ptr, 'x');
	}
	return (len);
}
