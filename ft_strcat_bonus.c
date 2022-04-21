/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 23:01:12 by troberts          #+#    #+#             */
/*   Updated: 2022/04/10 01:12:27 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	char	*dtmp;

	i = ft_strlen(dest);
	dtmp = dest + i;
	ft_strcpy(dtmp, src);
	return (dest);
}
