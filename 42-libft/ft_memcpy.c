/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:20:56 by blee              #+#    #+#             */
/*   Updated: 2021/09/23 10:20:56 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_src;
	unsigned char	*dest_dst;

	i = 0;
	dest_src = (unsigned char *)src;
	dest_dst = (unsigned char *)dst;
	while (i < n)
	{
		dest_dst[i] = dest_src[i];
		i++;
	}
	return (dst);
}
