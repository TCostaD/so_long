/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:10:28 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/11/30 08:20:44 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "libft/libft.h"

typedef struct s_game
{
	int		fd;
	int		map_width;
	int		map_height;
	int		player_x;
	int		player_y;
	int		collectibles;
	int		moves;
	int		exit;
	char	**map;
}				t_game;


#endif