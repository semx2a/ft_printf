/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozcan <seozcan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:59:05 by seozcan           #+#    #+#             */
/*   Updated: 2024/01/30 13:30:27 by seozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long long int	n;
	int				ret;

	ret = 0;
	n = nb;
	if (n < 0)
	{
		ret += ft_putchar_printf('-');
		n *= -1;
	}
	if (n < 10)
		ret += ft_putchar_printf(n + '0');
	else
	{
		ret += ft_putnbr(n / 10);
		ret += ft_putnbr(n % 10);
	}
	return (ret);
}

int	ft_putnbr_base(unsigned long long int nb, char *base)
{
	int						ret;
	unsigned long long int	baselen;

	ret = 0;
	baselen = ft_strlen_printf(base);
	if (nb >= baselen)
		ret += ft_putnbr_base(nb / baselen, base);
	ret += ft_putchar_printf(base[nb % baselen]);
	return (ret);
}

int	ft_print_memory(unsigned long long int nb)
{
	int	ret;

	ret = 0;
	ret += ft_putstr_printf("0x");
	ret += ft_putnbr_base(nb, "0123456789abcdef");
	return (ret);
}
