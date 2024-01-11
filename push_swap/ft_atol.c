/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:16:22 by rtavabil          #+#    #+#             */
/*   Updated: 2023/12/18 14:30:55 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

long int	ft_atol(char *str)
{
	long int	minus;
	long int	nb;

	minus = 1;
	nb = 0;
	while (*str == ' ' || (9 <= *str && *str <= 13))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			minus = minus * -1;
		}
		str++;
	}
	while (47 < *str && *str < 58)
	{
		nb = nb * 10 + (*str - 48);
		str++;
	}
	return (nb * minus);
}
