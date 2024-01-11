/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:13:03 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 10:39:48 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*node;

	if (!*a || !(*a)->next)
		return ;
	node = pop(a);
	ft_lstadd_back(a, node->content);
	ft_printf("ra\n");
	free(node);
}

void	rb(t_stack **b)
{
	t_stack	*node;

	if (!*b || !(*b)->next)
		return ;
	node = pop(b);
	ft_lstadd_back(b, node->content);
	ft_printf("rb\n");
	free(node);
}

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if ((*a && (*a)->next) && (*b && (*b)->next))
	{
		node = pop(a);
		ft_lstadd_back(a, node->content);
		free(node);
	}
	else
		return ;
	if ((*a && (*a)->next) && (*b && (*b)->next))
	{
		node = pop(b);
		ft_lstadd_back(b, node->content);
		free(node);
	}
	else
		return ;
	ft_printf("rr\n");
}
