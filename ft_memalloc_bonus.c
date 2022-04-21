/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:02:28 by troberts          #+#    #+#             */
/*   Updated: 2022/04/18 22:11:35 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Prototype void * ft_memalloc(size_t size);
// Description Allocates (with malloc(3)) and returns a “fresh” memory
// area. The memory allocated is initialized to 0. If the allocation
// fails, the function returns NULL.
// Param. #1 The size of the memory that needs to be allocated.
// Return value The allocated memory area.
// Libc functions malloc(3)

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
