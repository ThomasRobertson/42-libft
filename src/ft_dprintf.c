/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:02:17 by troberts          #+#    #+#             */
/*   Updated: 2022/09/19 18:57:27 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(int fd, const char *fmt, ...)
{
	va_list	args;
	int		nbr_print;

	va_start(args, fmt);
	nbr_print = _ft_printf_scan_args(fd, args, fmt);
	va_end(args);
	if (nbr_print == PRINTF_ERROR_CODE)
		return (PRINTF_ERROR_CODE);
	return (nbr_print);
}