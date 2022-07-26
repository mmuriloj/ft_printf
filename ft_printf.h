/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:41:05 by mumontei          #+#    #+#             */
/*   Updated: 2022/07/26 16:58:39 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *str, ...);
int			checkflag(const char *str, va_list args);
int			ft_putchar_fd(char c, int fd);
int			ft_putstr_fd(char *s, int fd);
int			num_digits(int n);
int			ft_print_int(int num);
int			print_ptr(void *ptr);
int			ft_strlen(const char *s);
char		*ft_itoa(size_t n);
int			print_u(unsigned int num);
int			ft_print_hex(unsigned int nbr, char *base);
char		*hex_to_string(unsigned long int number, char *base);
int			hex_length(unsigned long int num);
int			num_digits_sixteen(unsigned long int n);

#endif