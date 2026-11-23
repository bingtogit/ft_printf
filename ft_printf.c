/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhiyat <aakhiyat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 22:03:48 by aakhiyat          #+#    #+#             */
/*   Updated: 2026/11/23 18:56:52 by aakhiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int formatter(char c,va_list args)
{
	if (!c)
		return(-1);
	if (c == 'c')
		return(ft_putchar(va_arg(args,int)));
	if (c == 's')
		return(ft_putstr(va_arg(args,char *)));
	if (c == 'p')
		return(ft_address_to_hexa((unsigned long)va_arg(args,void *),"0123456789abcdef"));
	if (c == 'd' || c == 'i')
		return(ft_putnbr(va_arg(args,int)));
	if (c == 'u')
		return(ft_putunsigned(va_arg(args,unsigned int)));
	if (c == 'x')
		return(ft_x_number_to_hexa(va_arg(args,unsigned int)));
	if (c == 'X')
		return(ft_X_number_to_hexa(va_arg(args,unsigned int)));
	if (c == '%')
		return(ft_putchar('%'));
    else
        return(-1);
}

static int error_exit(va_list args)
{
    va_end(args);
    return (-1);
}

int ft_printf(const char *format, ...)
{
	int i;
	int count;
	int ret;
	va_list args;
	va_start(args,format);
    
	if (!format)
		return (error_exit(args));
	i = 0;
	count = 0;
	while(format[i])
	{
		ret = 0;
		if (format[i] == '%')
			ret = formatter(format[++i],args);
		else
        	ret = write(1, &format[i], 1);
    	if (ret == -1)
			return(error_exit(args));
		count += ret;
		i++;
    }
	va_end(args);
	return(count);
}

int main(){
	char *arr;
	char str[] = "hello";

	arr = str;
	ft_printf("%s", &arr[0]);
}