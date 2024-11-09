/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:45:11 by iguney            #+#    #+#             */
/*   Updated: 2024/11/09 19:49:31 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_base(nb / 16, alpha);
	count += ft_put_c(alpha[nb % 16]);
	return (count);
}
