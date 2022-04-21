/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:30:20 by troberts          #+#    #+#             */
/*   Updated: 2022/04/10 01:08:44 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*desttmp;
	size_t	i;

	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	i = 0;
	desttmp = dest;
	while (i < n)
	{
		*(unsigned char *)desttmp = *(unsigned char *)src;
		i++;
		desttmp++;
		src++;
	}
	return (dest);
}
