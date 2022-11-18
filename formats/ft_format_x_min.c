/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:15:06 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 16:23:49 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format_x_min(int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
	{
		if (ft_put_hex(n, 'a') < 0)
			return (-1);
	}
	return (ft_hex_len(n));
}
