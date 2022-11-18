/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:14:08 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 11:26:14 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format_x_maj(long int n)
{
	int	x;

	if (n == 0)
		return (ft_putchar('0'));
	else
	{
		x = ft_put_hex(n, 'A');
		if (x < 0)
			return (-1);
	}
	return (ft_hex_len(n));
}
