/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:08:30 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/06 15:33:32 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_char;
	unsigned char	*src_char;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	src_char = (unsigned char *)src;
	dest_char = (unsigned char *)dest;
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}
