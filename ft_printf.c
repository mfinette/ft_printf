/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:14:54 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/14 17:30:59 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case(va_list valist, char c)
{
	if (c == 'c')
		return (ft_format_c(va_arg(valist, int)));
	else if (c == 'd' || c == 'i')
		return (ft_format_d(va_arg(valist, int)));
	else if (c == 's')
		return (ft_format_s(va_arg(valist, char *)));
	else if (c == 'p')
		return (ft_format_p(va_arg(valist, unsigned long long)));
	else if (c == 'u')
		return (ft_format_u(va_arg(valist, unsigned int)));
	else if (c == 'x')
		return (ft_format_x_min(va_arg(valist, int)));
	else if (c == 'X')
		return (ft_format_x_maj(va_arg(valist, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	valist;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(valist, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			len++;
		}
		if (str[i] == '%')
		{
			len = len + ft_case(valist, str[i + 1]);
			i++;
		}
		i++;
	}
	return (len);
}

int main(void)
{
	int	toto;

	toto = 4;
	ft_printf("addresse = %p", &toto);
}