/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:52:36 by troberts          #+#    #+#             */
/*   Updated: 2022/04/18 22:41:33 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*stmp;

	stmp = s;
	while (n > 0)
	{
		*((unsigned char *)stmp) = c;
		stmp++;
		n--;
	}
	return (s);
}
