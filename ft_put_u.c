/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:49:53 by iguney            #+#    #+#             */
/*   Updated: 2024/11/09 21:48:54 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_put_d_i(nb / 10);
		count += ft_put_d_i(nb % 10);
	}
	else if (nb <= 9)
		count = ft_put_c(nb + '0');
	if (count < 0)
		return (-1);
	return (count);
}
