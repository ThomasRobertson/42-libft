/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_return.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:05:22 by troberts          #+#    #+#             */
/*   Updated: 2022/09/24 19:15:43 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_error_return(int fd, char *str, int return_status)
{
	if (str == NULL || ft_strcmp("", str) == 0)
		ft_dprintf(fd, "%s\n", strerror(errno));
	else
		ft_dprintf(fd, "%s: %s\n", str, strerror(errno));
	return (return_status);
}
