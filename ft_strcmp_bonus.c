/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 04:56:23 by troberts          #+#    #+#             */
/*   Updated: 2022/04/10 05:09:27 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (ft_strlen(s1) < ft_strlen(s2))
		return (ft_memcmp(s1, s2, ft_strlen(s1) + 1));
	else
		return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
}
