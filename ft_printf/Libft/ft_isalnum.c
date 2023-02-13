/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:01:49 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/09 16:33:14 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*
#include <ctype.h>
#include <stdio.h>
int main() {
	int i = 0;
	while (i++ <= 9)
	{
		printf("%i", ft_isalnum(i));
		printf("%i", isalnum(i));
		printf("\n");
	}

	int a = 'a';
	while (a++ <= 'z')
	{
		printf("%i", ft_isalnum(a));
		printf("%i", isalnum(a));
		printf("\n");
	}
	printf("%i", ft_isalnum('&'));
	printf("%i\n", isalnum('&'));
}
*/