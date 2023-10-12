/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:45:44 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/09 16:35:16 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c <= 'Z' && c >= 'A')
		|| (c >= 'a' && c <= 'z'));
}

/*
#include <stdio.h>
int main() {
	printf("%i", ft_isalpha('b'));
	printf("%i", ft_isalpha('&'));
	printf("%i", ft_isalpha('7'));
	printf("%i\n", ft_isalpha('Z'));
}
*/
