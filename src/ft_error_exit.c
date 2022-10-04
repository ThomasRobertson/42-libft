/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:18:43 by troberts          #+#    #+#             */
/*   Updated: 2022/09/24 19:10:26 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error_exit(int fd, char *str, int exit_status)
{
	if (str == NULL || ft_strcmp("", str) == 0)
		ft_dprintf(fd, "%s\n", strerror(errno));
	else
		ft_dprintf(fd, "%s: %s\n", str, strerror(errno));
	exit(exit_status);
}
