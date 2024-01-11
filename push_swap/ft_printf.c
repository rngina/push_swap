/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:19:06 by rtavabil          #+#    #+#             */
/*   Updated: 2023/12/18 14:47:32 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static void	ft_putstr(char *s, int *ret)
{
	if (!s)
		s = "(null)";
	while (*s)
	{
		*ret += ft_putchar(*s);
		s++;
	}
}

static void	check(char str, va_list args, int *ret)
{
	if (str == 'c')
		*ret += ft_putchar(va_arg(args, int));
	if (str == 's')
		ft_putstr(va_arg(args, char *), ret);
	if (str == '%')
		*ret += ft_putchar('%');
}

int	ft_printf(const char	*str, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			check(str[i], args, &len);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
