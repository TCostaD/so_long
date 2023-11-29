/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:59:14 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/11 17:34:29 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_move;

	if (lst != NULL && del != NULL)
	{
		lst_move = *lst;
		while (lst_move != NULL)
		{
			*lst = lst_move->next;
			ft_lstdelone(lst_move, del);
			lst_move = *lst;
		}
		*lst = NULL;
	}
}
