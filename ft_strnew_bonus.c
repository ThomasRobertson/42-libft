/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:42:25 by troberts          #+#    #+#             */
/*   Updated: 2022/04/18 18:32:01 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create a new malloc string, with \0 everywhere.
 * 
 * @param size Lenght of new string, without the last \0.
 * @return char* 
 */

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *) malloc(sizeof(*str) * size + 1);
	if (str == NULL)
		return (NULL);
	while (size > 0)
	{
		str[size] = 0;
		size--;
	}
	str[0] = 0;
	return (str);
}
