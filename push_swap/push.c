/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:49:05 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 10:39:47 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*pop(t_stack **stack)
{
	t_stack	*node;

	if (*stack == NULL)
		return (NULL);
	node = *stack;
	if ((*stack)->next)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	return (node);
}

void	pa(t_stack **b, t_stack **a)
{
	t_stack	*node;

	if (!*b)
		return ;
	node = pop(b);
	if (node != NULL)
		ft_lstadd_front(a, node);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*node;

	if (!*a)
		return ;
	node = pop(a);
	if (node != NULL)
		ft_lstadd_front(b, node);
	ft_printf("pb\n");
}
