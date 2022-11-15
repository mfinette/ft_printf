/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:18:34 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/12 19:19:49 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;

	if (nmemb && SIZE_MAX / nmemb < size)
		return (0);
	space = (void *)malloc(size * nmemb);
	if (!space)
		return (0);
	ft_bzero(space, size * nmemb);
	return (space);
}
