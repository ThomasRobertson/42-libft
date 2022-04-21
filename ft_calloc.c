/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:11:56 by troberts          #+#    #+#             */
/*   Updated: 2022/04/19 22:19:16 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkoverflow(size_t a, size_t b)
{
	size_t	sizetmax;
	size_t	sizetmin;

	sizetmax = SIZE_MAX;
	sizetmin = 0;
	if (a > (sizetmax / b))
		return (1);
	else if (a < (sizetmin / b))
		return (1);
	else
		return (0);
}

static void	*ft_memalloc_static(size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (checkoverflow(nmemb, size) == 1)
		return (NULL);
	ptr = ft_memalloc_static(nmemb * size);
	return (ptr);
}
