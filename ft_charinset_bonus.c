/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charinset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 02:15:25 by troberts          #+#    #+#             */
/*   Updated: 2022/04/13 02:36:27 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charinset(char c, char const *set)
{
	if (ft_strchr(set, c) == NULL)
		return (0);
	return (1);
}
