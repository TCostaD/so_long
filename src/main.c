/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:11:06 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/11/30 08:24:23 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr_fd("Usage: ./so_long [map.ebr]", 2);
	}
}