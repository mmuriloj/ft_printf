/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:39:03 by mumontei          #+#    #+#             */
/*   Updated: 2022/08/03 15:16:22 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	size_t			ret;
	char			*pt_char;
	size_t			len;

	len = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ret = (size_t)ptr;
	pt_char = ft_hextoa(ret, LOWER_HEX_BASE);
	write(1, "0x", 2);
	len = ft_strlen(pt_char) + 2;
	ft_putstr_fd(pt_char, 1);
	free(pt_char);
	return (len);
}
