/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 03:55:02 by troberts          #+#    #+#             */
/*   Updated: 2022/04/19 04:02:36 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cnt;

	if (lst == NULL)
		return (0);
	cnt = 1;
	while (lst->next)
	{
		cnt++;
		lst = lst->next;
	}
	return (cnt);
}
