/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:41:05 by mumontei          #+#    #+#             */
/*   Updated: 2022/08/03 15:01:29 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define LOWER_HEX_BASE "0123456789abcdef"
# define UPPER_HEX_BASE "0123456789ABCDEF"

int			ft_printf(const char *str, ...);
int			check_identifier(const char *str, va_list args);
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *str, int fd);
int			num_len(int num);
int			ft_print_int(int num);
int			ft_print_ptr(void *ptr);
int			ft_strlen(const char *str);
char		*ft_hextoa(unsigned long int num, char *base);
int			ft_print_u(unsigned int num);
int			ft_print_hex(unsigned int num, char *base);
int			hex_length(unsigned long int num);

#endif