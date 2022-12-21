/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: destrada <destrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:42:42 by destrada          #+#    #+#             */
/*   Updated: 2022/10/11 13:09:12 by destrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *s, ...);
void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);
void	ft_puthex(unsigned int n, char *base);
int		ft_nbrlen(int nbr);
int		ft_nbrhex_len(unsigned int n);
int		ft_unsigned_nbrlen(unsigned int nbr);
void	ft_printstr(const char *s);
int		ft_printlen(const char *s);
int		ft_ptr_len(unsigned long long n);
void	ft_put_ptr(unsigned long long n, char *base);

#endif