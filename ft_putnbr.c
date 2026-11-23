/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 21:57:06 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/23 17:49:19 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_negative(int *c)
{
    int j;
    j = write(1, "-", 1);
    if (j == -1)
        return (-1);
    *c = -(*c);
    return (j);
}

static void insert(char *arr,int c,int *i)
{
    while (c > 0)
    {
        arr[--*i] = c % 10 + '0';
        c /= 10;
    }
}

int    ft_putnbr(int c)
{
    char    arr[12];
    int i;
    int j;
    int ret;
    
    i = 12;
    j = 0;
    if(c == -2147483648)
        return(ft_putstr("-2147483648"));
    if (c < 0)
    {
        ret = check_negative(&c);
        if (ret == -1)
            return (-1);
        j += ret;
    }
    if (c == 0)
        return(ft_putchar('0'));
    insert(arr,c,&i);
    ret = ft_putstr(&arr[i]);
    if (ret == -1)
        return (-1);
    j += ret;
    return (j);
}
