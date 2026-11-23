/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address_to_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 18:20:28 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/22 17:34:50 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_address_to_hexa(unsigned long c, char *base)
{
	int		i;
    int		j;
	char		arr[16];

	i = 16;
	j = 0;
	if (c == 0)
		return (ft_putstr("(nil)"));
	j += write(1, "0x", 2);
	while (c > 0)
	{
		arr[--i] = base[c % 16];
		c /= 16;
	}
	j += write(1, &arr[i], 16 - i);
	return (j);
}
