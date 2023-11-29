/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 18:14:52 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/06 15:44:21 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_char;
	unsigned char	*dest_char;

	if (!dest && !src)
		return (NULL);
	src_char = (unsigned char *)src;
	dest_char = (unsigned char *)dest;
	if (src_char < dest_char)
	{
		while (n--)
			dest_char[n] = src_char[n];
	}
	else
		ft_memcpy(dest_char, src_char, n);
	return (dest);
}
