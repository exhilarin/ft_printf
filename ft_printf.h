/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguney <iguney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:50:04 by iguney            #+#    #+#             */
/*   Updated: 2024/11/09 17:49:56 by iguney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_check_type(const char type, va_list args);
int	ft_base(unsigned long nb, char *alpha);
int	ft_put_c(char c);
int	ft_put_d_i(int nb);
int	ft_put_p(void *arg);
int	ft_put_s(char *str);
int	ft_put_u(unsigned int nb);
int	ft_put_x(unsigned int nb, int type);

#endif
