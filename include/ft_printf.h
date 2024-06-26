/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 13:19:12 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/05/26 21:11:41 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

int	print_char(char c);
int	print_int(long int i);
int	print_str(char *str);
int	digit_counter(long int n);
int	putuint(unsigned int n);
int	print_hex(unsigned int n, char fs);
int	print_ptr(unsigned long *ptr);
int	ft_printf(const char *input, ...);

#endif
