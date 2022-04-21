/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 04:04:19 by troberts          #+#    #+#             */
/*   Updated: 2022/04/19 18:47:47 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_back;

	if (new == NULL || lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	lst_back = ft_lstlast(*lst);
	lst_back->next = new;
}
