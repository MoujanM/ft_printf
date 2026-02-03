/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:30:35 by mmirdama          #+#    #+#             */
/*   Updated: 2025/12/23 17:16:32 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	if (!format)
		return (-1);
	if (*format == '\0')
		return (0);
	count = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
			count += ft_parse_specifier(*format, args);
			format++;
			continue ;
		}
		count += ft_print_c(*format);
		format++;
	}
	va_end(args);
	return (count);
}

int	ft_parse_specifier(char specifier, va_list args)
{
	static const t_specifier	specs_table[] = {
	{'c', &handle_c},
	{'d', &handle_d},
	{'i', &handle_d},
	{'s', &handle_s},
	{'x', &handle_x},
	{'X', &handle_x_up},
	{'u', &handle_u},
	{'p', &handle_p},
	{0, NULL}};
	int							i;

	if (specifier == '%')
		return (write(1, "%", 1));
	i = 0;
	while (specs_table[i].spec != 0)
	{
		if (specs_table[i].spec == specifier)
			return (specs_table[i].function(args));
		i++;
	}
	return (0);
}
