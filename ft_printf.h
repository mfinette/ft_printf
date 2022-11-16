/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfinette <mfinette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:14:33 by mfinette          #+#    #+#             */
/*   Updated: 2022/11/16 15:48:43 by mfinette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_u_putnbr(unsigned int n);
int		ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char letter);
void	ft_put_ptr(unsigned long long int num);
int		ft_format_s(char *str);
int		ft_format_c(char c);
int		ft_format_d(int n);
int		ft_format_p(unsigned long long ptr);
int		ft_format_u(unsigned int n);
int		ft_format_x_min(int n);
int		ft_format_x_maj(int n);
int		ft_printf(const char *str, ...);

#endif