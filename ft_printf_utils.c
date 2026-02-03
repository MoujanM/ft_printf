/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:48:11 by mmirdama          #+#    #+#             */
/*   Updated: 2025/12/13 14:03:42 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_base(unsigned long long num, char *base)
{
	int	base_value;
	int	count;

	base_value = ft_strlen(base);
	count = 0;
	if (num >= (unsigned long long)base_value)
		count += ft_print_base(num / base_value, base);
	count += write(1, &base[num % base_value], 1);
	return (count);
}

int	handle_u(va_list args)
{
	return (ft_print_base(va_arg(args, unsigned int), "0123456789"));
}

int	handle_x(va_list args)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (ft_print_base(va_arg(args, unsigned int), hex));
}

int	handle_x_up(va_list args)
{
	char	*hex_up;

	hex_up = "0123456789ABCDEF";
	return (ft_print_base(va_arg(args, unsigned int), hex_up));
}

int	handle_p(va_list args)
{
	unsigned long	ptr;
	char			*hex;
	int				count;

	count = 0;
	ptr = (unsigned long long)va_arg(args, void *);
	hex = "0123456789abcdef";
	if (ptr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	else
	{
		count += write(1, "0x", 2);
		count += ft_print_base(ptr, hex);
	}
	return (count);
}
