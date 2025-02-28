/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:42:54 by iguney            #+#    #+#             */
/*   Updated: 2024/11/09 23:17:58 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(void *arg)
{
	int				count;
	unsigned long	adress;
	char			*alpha;

	count = 0;
	if (arg == NULL)
	{
		count += ft_put_s("(nil)");
		return (count);
	}
	alpha = "0123456789abcdef";
	adress = (unsigned long)arg;
	count += ft_put_s("0x");
	count += ft_base(adress, alpha);
	return (count);
}
