/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:28:23 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/04/28 15:52:54 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	len--;
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}
