/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 01:39:37 by iguney            #+#    #+#             */
/*   Updated: 2024/11/09 18:13:20 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_s(char *str)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (str == NULL)
    {
        count += ft_put_s("(null)");
        return (count);
    }
    while (str[i])
    {
        count += ft_put_c(str[i]);
        i++;
    }
    return (count);
}
