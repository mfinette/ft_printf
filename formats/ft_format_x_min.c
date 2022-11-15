/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:15:06 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/12 19:13:42 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format_x_min(int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		ft_put_hex(n, 'x');
	return (ft_hex_len(n));
}
