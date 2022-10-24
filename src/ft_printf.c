/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:02:17 by troberts          #+#    #+#             */
/*   Updated: 2022/10/24 20:41:15 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	process_args(int fd, va_list args, const char *fmt)
{
	if (fmt[0] == '%')
		return (write(fd, "%", 1));
	else if (fmt[0] == 'i' || fmt[0] == 'd')
		return (_ft_printf_print_int(fd, args));
	else if (fmt[0] == 'c')
		return (_ft_printf_print_char(fd, args));
	else if (fmt[0] == 's')
		return (_ft_printf_print_str(fd, args));
	else if (fmt[0] == 'u')
		return (_ft_printf_print_unsigned(fd, args));
	else if (fmt[0] == 'x')
		return (_ft_printf_print_lower_hex(fd, args));
	else if (fmt[0] == 'X')
		return (_ft_printf_print_upper_hex(fd, args));
	else if (fmt[0] == 'p')
		return (_ft_printf_print_ptr(fd, args));
	else
		return (PRINTF_ERROR_CODE);
}

int	_ft_printf_scan_args(va_list args, const char *fmt, int fd)
{
	int	i;
	int	nbr_print;
	int	tmp;

	i = 0;
	nbr_print = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			if (fmt[i] != '\0')
			{
				tmp = process_args(fd, args, fmt + i);
				if (tmp == PRINTF_ERROR_CODE)
					return (PRINTF_ERROR_CODE);
				nbr_print += tmp;
			}
		}
		else
			nbr_print += write(fd, &fmt[i], 1);
		i++;
	}
	return (nbr_print);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		nbr_print;

	va_start(args, fmt);
	nbr_print = _ft_printf_scan_args(args, fmt, STDOUT_FILENO);
	va_end(args);
	if (nbr_print == PRINTF_ERROR_CODE)
		return (PRINTF_ERROR_CODE);
	return (nbr_print);
}
