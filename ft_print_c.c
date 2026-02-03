/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:28:09 by mmirdama          #+#    #+#             */
/*   Updated: 2025/12/13 12:51:17 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_c(va_list args)
{
	return (ft_print_c(va_arg(args, int)));
}

int	ft_print_c(int c)
{
	return (write(1, &c, 1));
}
