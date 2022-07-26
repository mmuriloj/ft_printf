/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumontei <mumontei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:32:42 by mumontei          #+#    #+#             */
/*   Updated: 2022/07/26 18:11:27 by mumontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_digits(int nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr)
	{
		nbr = (nbr / 10);
		count++;
	}
	return (count);
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
	ft_putchar_fd((char)(nbr % 10 + 48), 1);
	return (num_digits(nb));
}

/*int	num_digits(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digits = 1;
		n = -n;
	}
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits);
}

int	ft_int(int nb)
{
	unsigned long int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nbr = (int)(nb * -1);
	}
	else
		nbr = (int)nb;
	if (nbr >= 10)
		ft_int(nbr / 10);
	ft_putchar_fd((char)(nbr % 10 + 48), 1);
	return (num_digits(nb));
}*/

int	print_u(unsigned int num)
{
	int	i;

	i = 0;
	if (num > 9)
		i += print_u(num / 10);
	write(1, &"0123456789"[num % 10], 1);
	i++;
	return (i);
}

int	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}
