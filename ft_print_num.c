/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:32:42 by mumontei          #+#    #+#             */
/*   Updated: 2022/08/03 15:15:28 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		num = (num / 10);
		len++;
	}
	return (len);
}

int	ft_print_int(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nbr = (int)(nb * -1);
	}
	else
		nbr = (int)nb;
	if (nbr >= 10)
		ft_print_int(nbr / 10);
	ft_putchar_fd((char)(nbr % 10 + '0'), 1);
	return (num_len(nb));
}

int	ft_print_u(unsigned int num)
{
	int	i;

	i = 0;
	if (num > 9)
		i += ft_print_u(num / 10);
	write(1, &"0123456789"[num % 10], 1);
	i++;
	return (i);
}
