/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_tools.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:05:08 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/12 19:14:16 by mfinette         ###   ########.fr       */
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

void	ft_put_hex(unsigned int num, const char letter)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, letter);
		ft_put_hex(num % 16, letter);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (letter == 'x')
				ft_putchar((num - 10 + 'a'));
			if (letter == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}
