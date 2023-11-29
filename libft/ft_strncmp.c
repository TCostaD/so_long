/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:37:53 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/08 15:24:11 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;	
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while ((ptr1[i] != '\0' && ptr2[i] != '\0')
		&& (ptr1[i] == ptr2[i] && i < n - 1))
		i++;
	if (n == 0)
		return (0);
	else
		return (ptr1[i] - ptr2[i]);
}
