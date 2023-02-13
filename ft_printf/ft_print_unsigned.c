/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:40:46 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/18 12:07:56 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_num_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int num)
{
	char	*ret;
	int		len;

	len = ft_u_num_len(num);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	while (num != 0)
	{
		ret[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (ret);
}

int	ft_print_unsigned(unsigned int i)
{
	int		len;
	char	*num;

	len = ft_u_num_len(i);
	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		num = ft_unsigned_itoa(i);
		ft_printstr(num);
		free(num);
	}
	return (len);
}
