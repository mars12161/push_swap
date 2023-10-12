/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:05:13 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/17 15:02:29 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
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

static int	count_digits(int n)
{
	int	counter;
	int	number;

	counter = 0;
	number = ft_abs(n);
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
		counter++;
	while (number > 0)
	{
		number = number / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ret;
	int		negative;
	int		digits;

	digits = count_digits(n);
	len = 0;
	negative = (n < 0);
	ret = malloc(digits * sizeof(char) + 1);
	if (!ret)
		return (NULL);
	ret[digits] = '\0';
	if (n == 0)
		ret[0] = '0';
	while (n != 0)
	{
		ret[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (negative)
		ret[len] = '-';
	ft_revstr(ret);
	return (ret);
}

/* 
#include <stdio.h>

int main() {
	char *num;
	num = ft_itoa(2147483647);
	printf("%s\n", num);
	num = ft_itoa(-450);
	printf("%s\n", num);
	num = ft_itoa(-2147483648);
	printf("%s\n", num);
	num = ft_itoa(2222);
	printf("%s\n", num);
} */