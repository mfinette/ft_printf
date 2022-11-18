/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:14:54 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 19:17:58 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_case(va_list valist, char c)
{
	int	x;

	x = 0;
	if (c == 'c')
		x = ft_format_c(va_arg(valist, int));
	else if (c == 'd' || c == 'i')
		x = ft_format_d(va_arg(valist, int));
	else if (c == 's')
		x = ft_format_s(va_arg(valist, char *));
	else if (c == 'p')
		x = ft_format_p(va_arg(valist, unsigned long long));
	else if (c == 'u')
		x = ft_format_u(va_arg(valist, unsigned int));
	else if (c == 'x')
		x = ft_format_x_min(va_arg(valist, int));
	else if (c == 'X')
		x = ft_format_x_maj(va_arg(valist, int));
	else if (c == '%')
		x = ft_putchar('%');
	return (x);
}

static	int	ft_print_get_len(va_list valist, const char *str, int len)
{
	int	i;
	int	x;

	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			x = len + ft_putchar(str[i]);
			if (x < len)
				return (-1);
			len = x;
		}
		if (str[i] == '%' && str[i + 1])
		{
			x = ft_case(valist, str[i + 1]);
			if (x < 0)
				return (-1);
			len = len + x;
			i++;
		}
		i++;
	}	
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	valist;
	int		len;

	len = 0;
	va_start(valist, str);
	len = ft_print_get_len(valist, str, len);
	va_end(valist);
	return (len);
}
