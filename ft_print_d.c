/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:14:38 by mmirdama          #+#    #+#             */
/*   Updated: 2025/12/13 12:51:04 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_d(va_list args)
{
	return (ft_print_d(va_arg(args, int)));
}

int	ft_print_d(int num)
{
	int		count;
	char	*str;

	count = 0;
	str = ft_itoa(num);
	count += ft_print_s(str);
	free(str);
	return (count);
}
