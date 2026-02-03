/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:33:08 by mmirdama          #+#    #+#             */
/*   Updated: 2025/12/30 13:51:20 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_parse_specifier(char specifier, va_list args);
int	ft_print_c(int c);
int	ft_print_d(int d);
int	ft_print_s(char *s);
int	ft_print_base(unsigned long long num, char *base);

typedef int	(*t_handler)(va_list);
typedef struct s_specifier
{
	char		spec;
	t_handler	function;
}	t_specifier;
int	handle_c(va_list args);
int	handle_d(va_list args);
int	handle_s(va_list args);
int	handle_x(va_list args);
int	handle_x_up(va_list args);
int	handle_p(va_list args);
int	handle_u(va_list args);

#endif