/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:10:37 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/09 16:49:03 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

/*
#include <stdio.h>
int main() {
	printf("%i\n", ft_isascii(225));
	printf("%i\n", ft_isascii(64));
	printf("%i\n", ft_isascii(300));
	printf("%i\n", ft_isascii('a'));
}
*/