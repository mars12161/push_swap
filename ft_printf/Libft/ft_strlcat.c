/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:01:30 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/11 14:49:16 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = size;
	while (*dst)
	{
		dst++;
		if (i > 0)
			i--;
	}
	while (*src && i > 1)
	{
		*dst++ = *src++;
		i--;
	}
	*dst = '\0';
	if (size > len_dst)
		return (len_dst + len_src);
	return (size + len_src);
}
