/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:14:08 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/12 19:13:37 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_format_x_maj(int n)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		ft_put_hex(n, 'X');
	return (ft_hex_len(n));
}
