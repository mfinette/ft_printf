/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_tools.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:05:08 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 16:22:50 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hex_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

int	ft_put_hex(unsigned int num, const char letter)
{
	int	x;

	if (write(1, 0, 0) != 0)
		return (-1);
	if (num >= 16)
	{
		ft_put_hex(num / 16, letter);
		ft_put_hex(num % 16, letter);
	}
	else
	{
		if (num <= 9)
		{
			x = ft_putchar(num + '0');
			if (x < 0)
				return (-1000);
		}
		else
		{
			if (ft_putchar(num - 10 + letter) < 0)
				return (-1000);
		}
	}
	return (0);
}
