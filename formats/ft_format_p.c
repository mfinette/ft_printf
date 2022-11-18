/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:24 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 11:16:41 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	p_len(unsigned long long num)
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

int	ft_format_p(unsigned long long ptr)
{
	int	len;
	int	x;

	len = 0;
	x = ft_putstr("0x");
	if (x < 0)
		return (-1);
	len = len + x;
	if (ptr == 0)
		len = len + ft_putstr("0");
	else
	{
		if (ft_put_ptr(ptr, 'a') < 0)
			return (-1);
		len = len + p_len(ptr);
	}
	return (len);
}
