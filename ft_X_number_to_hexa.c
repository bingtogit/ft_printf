/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X_number_to_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 23:03:47 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/23 18:49:25 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_X_number_to_hexa(unsigned int c)
{
    char    base[] = "0123456789ABCDEF";
    char    arr[12];
    int i;

    if (c == 0)
        return (ft_putchar('0'));
    i = 12;
    while (c > 0)
    {
        arr[--i] = base[c % 16];
        c /= 16;
    }
    return (ft_putstr(&arr[i]));
}
