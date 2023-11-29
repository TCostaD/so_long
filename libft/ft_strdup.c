/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:13:21 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/05 16:17:08 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(s) +1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, ft_strlen(s) +1);
	return (ptr);
}
