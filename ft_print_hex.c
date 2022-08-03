/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:51:24 by mumontei          #+#    #+#             */
/*   Updated: 2022/08/03 15:18:14 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, char *base)
{
	char	*str;
	int		len;

	str = ft_hextoa(num, base);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

char	*ft_hextoa(unsigned long int number, char *base)
{
	char	*hex;
	int		len;

	len = hex_length(number);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (0);
	hex[len] = '\0';
	while (len > 0)
	{
		hex[len - 1] = base[number % 16];
		number = number / 16;
		len--;
	}
	return (hex);
}

int	hex_length(unsigned long int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}
