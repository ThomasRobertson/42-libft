/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_print_ptr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:00:55 by troberts          #+#    #+#             */
/*   Updated: 2022/09/19 18:49:15 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*_ft_printf_get_ptr(va_list args)
{
	size_t	ptr;

	ptr = va_arg(args, size_t);
	return (_ft_printf_ft_uitoa(ptr, 16));
}

int	_ft_printf_print_ptr(int fd, va_list args)
{
	char	*str;
	int		len;

	str = _ft_printf_get_ptr(args);
	if (str == NULL)
	{
		write(0, "ERROR MALLOC", 13);
		return (PRINTF_ERROR_CODE);
	}
	else if (ft_strcmp(str, "0") == 0)
	{
		write (fd, "(nil)", 5);
		free(str);
		return (5);
	}
	write(fd, "0x", 2);
	len = ft_strlen(str) + 2;
	ft_putstr_fd(str, fd);
	free(str);
	return (len);
}
