/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:23:14 by troberts          #+#    #+#             */
/*   Updated: 2022/04/10 23:18:51 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks for white-space characters.
 * 
 * @param c 
 * @return The values returned are nonzero if the character c falls into the
 * tested class, and zero if not.
 */

int	ft_isspace(int c)
{
	if (c == ' ')
		return (8192);
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (8192);
	else
		return (0);
}
