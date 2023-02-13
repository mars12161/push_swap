/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:56:52 by mschaub           #+#    #+#             */
/*   Updated: 2023/01/23 16:25:26 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_hexlen(unsigned long long num)
{
	int					i;
	unsigned long long	number;

	i = 0;
	number = num;
	while (number > 0)
	{
		number = number / 16;
		i++;
	}
	return (i);
}

static void	ft_revstr(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

static void	printitout(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_writehex(unsigned long long num, const char format)
{
	int					i;
	char				*hex;
	unsigned long long	remainder;
	unsigned long long	quotient;

	quotient = num;
	i = 0;
	hex = ft_calloc(sizeof(char), (ft_hexlen(num) + 1));
	if (!hex)
		return ;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		quotient = quotient / 16;
		if (remainder < 10)
			hex[i++] = remainder + '0';
		else if (format == 'x')
			hex[i++] = (remainder - 10) + 'a';
		else if (format == 'X')
			hex[i++] = (remainder - 10) + 'A';
	}
	ft_revstr(hex);
	printitout(hex);
	free(hex);
}

int	ft_printhex(unsigned long long num, const char format)
{
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		ft_writehex(num, format);
	}
	return (ft_hexlen(num));
}

/*  
int	main(void)
{
	unsigned int i = 255;
	ft_printhex(i, 'X');
	return 0;
} */
