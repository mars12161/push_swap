/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:58:02 by mschaub           #+#    #+#             */
/*   Updated: 2023/02/15 14:59:59 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long	i;
	int		neg;
	long	retval;

	i = 0;
	neg = 1;
	retval = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		neg = neg * (-1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			retval = (retval * 10) + (str[i] - '0');
		i++;
	}
	return (retval * neg);
}

/*

#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("%i\n", ft_atoi("415"));
	printf("%i\n", atoi("415"));
	printf("%i\n", ft_atoi("-831934"));
	printf("%i\n", atoi("-831934"));
	printf("%i\n", ft_atoi("2147483647"));
	printf("%i\n", atoi("2147483647"));
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", atoi("-2147483648"));
	printf("%i\n", ft_atoi("--5"));
	printf("%i\n", atoi("--5"));

}

*/