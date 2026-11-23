/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 22:42:15 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:06 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putunsigned(unsigned int c)
{
    char    arr[12];
    int i;

    i = 12;
    if (c == 0)
        return (ft_putchar('0'));
    while (c > 0)
    {
        arr[--i] = c % 10 + '0';
        c /= 10;
    }
    return (ft_putstr(&arr[i]));
}
