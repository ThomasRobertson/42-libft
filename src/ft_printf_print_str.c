/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 21:27:14 by troberts          #+#    #+#             */
/*   Updated: 2022/09/19 18:49:33 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*_ft_printf_get_str(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	return (str);
}

int	_ft_printf_print_str(int fd, va_list args)
{
	char	*str;

	str = _ft_printf_get_str(args);
	if (str == NULL)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, fd);
	return (ft_strlen(str));
}
