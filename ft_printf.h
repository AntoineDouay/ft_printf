/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adouay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:30:19 by adouay            #+#    #+#             */
/*   Updated: 2022/05/18 19:18:18 by adouay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>

int 	ft_printf(const char *format, ...);
void	ft_print_hexa(unsigned long long int arg);
void	ft_print_maj_hexa(unsigned long long int arg);
int 	ft_hexa(unsigned int arg, char c);
int 	ft_len_hexa(unsigned long long int arg);
int		ft_int(int n);
int		ft_uint(unsigned int n);
int		ft_len_int(long long int n);
int 	ft_print_pointer(unsigned long long int arg);
void 	ft_print_int(int n);
void	ft_print_uint(unsigned int n);
int 	ft_printchar(int n);
