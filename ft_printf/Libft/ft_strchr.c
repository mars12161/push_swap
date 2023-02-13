/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:43:29 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/09 17:41:36 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (str)
	{
		while (*str)
		{
			if ((char)c == *str)
				return (str);
			str++;
		}
		if ((char)c == 0)
			return (str);
	}
	return (0);
}
