/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:37:54 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/22 14:37:57 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int    ft_putnbr(int c);
int    ft_putstr(char *s);
int    ft_address_to_hexa(unsigned long c,char *base);
int    ft_putchar(char c);
int    ft_x_number_to_hexa(unsigned int c);
int    ft_X_number_to_hexa(unsigned int c);
int    ft_putunsigned(unsigned int c);
int    ft_printf(const char *format, ...);

#endif