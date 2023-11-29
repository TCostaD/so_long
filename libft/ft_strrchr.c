/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:22:37 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/08 16:17:34 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	if ((char)c == '\0')
		return ((char *)&ptr[ft_strlen(ptr)]);
	i = (size_t)ft_strlen(s);
	while (i > 0)
	{
		i--;
		if (ptr[i] == (char)c)
			return ((char *)&ptr[i]);
	}
	return (NULL);
}
