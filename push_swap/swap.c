/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:17:20 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 14:27:25 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	int	first;
	int	second;

	if (*a && (*a)->next)
	{
		first = (*a)->content;
		second = (*a)->next->content;
		(*a)->content = second;
		(*a)->next->content = first;
	}
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	int	first;
	int	second;

	if (*b && (*b)->next)
	{
		first = (*b)->content;
		second = (*b)->next->content;
		(*b)->content = second;
		(*b)->next->content = first;
	}
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	int	first;
	int	second;

	if ((*a && (*a)->next) && (*b && (*b)->next))
	{
		if (*a && (*a)->next)
		{
			first = (*a)->content;
			second = (*a)->next->content;
			(*a)->content = second;
			(*a)->next->content = first;
		}
		if (*b && (*b)->next)
		{
			first = (*b)->content;
			second = (*b)->next->content;
			(*b)->content = second;
			(*b)->next->content = first;
		}
		ft_printf("ss\n");
	}
}
