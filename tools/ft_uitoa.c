/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:33:20 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/18 10:03:05 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_strrev(char *str)
{
	size_t	length;
	size_t	i;
	char	tmp;

	length = ft_strlen(str);
	i = 0;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = tmp;
		i++;
	}
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;
	size_t	len;

	len = 0;
	str = ft_calloc(11, sizeof(*str));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len] = '0' + (n % 10);
		n = (n / 10);
		len++;
	}
	ft_strrev(str);
	return (str);
}
