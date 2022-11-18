/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:54:32 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 15:52:41 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	x;

	x = write(1, str, ft_strlen(str));
	return (x);
}

int	ft_putnbr(int n)
{
	char	*str;
	int		x;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	x = ft_putstr(str);
	free(str);
	if (x < 0)
		return (-1);
	return (x);
}

int	ft_u_putnbr(unsigned int n)
{
	int		len;
	char	*num;
	int		x;

	len = 0;
	if (n == 0)
	{
		x = ft_putchar('0');
		if (x < 0)
			return (-1);
		len = len + x;
	}
	else
	{
		num = ft_uitoa(n);
		if (!num)
			return (-1);
		x = ft_putstr(num);
		free(num);
		if (x < 0)
			return (-1);
		len = len + x;
	}
	return (len);
}

int	ft_put_ptr(unsigned long long int num, const char letter)
{
	int	x;

	if (num >= 16)
	{
		ft_put_ptr(num / 16, letter);
		ft_put_ptr(num % 16, letter);
	}
	else
	{
		if (num <= 9)
		{
			x = ft_putchar(num + '0');
			if (x < 0)
				return (-100);
		}
		else
		{
			if (ft_putchar(num - 10 + letter) < 0)
				return (-100);
		}
	}
	return (0);
}
