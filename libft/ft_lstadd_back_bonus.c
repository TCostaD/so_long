/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:26:49 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/05/11 11:32:14 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_move;

	if (lst != NULL && new != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			lst_move = ft_lstlast(*lst);
			lst_move->next = new;
		}
	}
}
