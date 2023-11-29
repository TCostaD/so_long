/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:31:09 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/02 15:06:26 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ss1;
	char	*ss2;
	char	*end;

	i = 0;
	j = 0;
	ss1 = (char *) s1;
	ss2 = (char *) s2;
	end = (char *) malloc(sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1));
	if (end == NULL)
		return (NULL);
	while (ss1[i] != '\0')
	{	
		end[i] = ss1[i];
		i++;
	}
	while (ss2[j] != '\0')
	{
		end[i + j] = ss2[j];
		j++;
	}
	end[i + j] = '\0';
	return (end);
}
