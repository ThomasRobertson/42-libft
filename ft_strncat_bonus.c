/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:59:53 by troberts          #+#    #+#             */
/*   Updated: 2022/04/10 01:07:58 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	char	*dtmp;

	i = ft_strlen(dest);
	dtmp = dest + i;
	if (ft_strlen(src) < n)
		n = ft_strlen(src);
	ft_memcpy(dtmp, src, n);
	dtmp[n] = 0;
	return (dest);
}
