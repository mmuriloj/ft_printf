/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:39:03 by mumontei          #+#    #+#             */
/*   Updated: 2022/07/26 02:54:24 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_print_ptr(unsigned long int ptr)
{
	size_t	ret;
	int				res;
	static int		flag;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ret = (size_t)ptr;
	res = 0;
	if (ret > 15)
	{	
		flag = 1;
		if (flag != 1)
			write(1, "0x", 2);
		res += print_ptr((ret / 16));
	}
	res += ft_putchar_fd("0123456789abcdef"[ret % 16], 1);
	return (res + 2);
}*/

int	print_ptr(void *ptr)
{
	size_t			ret;
	char			*pt_char;
	size_t			res;

	res = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ret = (size_t)ptr;
	pt_char = ft_itoa(ret);
	write(1, "0x", 2);
	res = ft_strlen(pt_char) + 2;
	ft_putstr_fd(pt_char, 1);
	free(pt_char);
	return (res);
}

char	*ft_itoa(size_t n)
{
	char				*mem;
	int					i;
	int					digits;
	unsigned long int	ln;

	ln = n;
	digits = num_digits_sixteen(ln);
	i = 0;
	mem = (char *)malloc((digits + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (digits)
	{
		mem[digits-- - 1] = "0123456789abcdef"[ln % 16];
		ln = ln / 16;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

int	num_digits_sixteen(unsigned long int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		digits++;
		n = n / 16;
	}
	return (digits);
}
