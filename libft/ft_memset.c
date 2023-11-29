/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:19:23 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/05 17:37:34 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_char;
	size_t			i;

	i = 0;
	s_char = (unsigned char *)s;
	while (i < n)
	{
		s_char[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
