/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:25:50 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/04 14:28:22 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*min_node(t_stack *stack)
{
	t_stack	*min_node;

	min_node = stack;
	while (stack)
	{
		if (stack->content < min_node->content)
		{
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	set_target_b(t_stack **b, t_stack **a)
{
	t_stack		*temp_b;
	t_stack		*temp_a;
	long int	closest;

	temp_b = *b;
	while (temp_b)
	{
		closest = LONG_MAX;
		temp_a = *a;
		while (temp_a)
		{
			if ((temp_b->content < temp_a->content) \
			&& (temp_a->content < closest))
			{
				temp_b->target = temp_a;
				closest = temp_a->content;
			}
			temp_a = temp_a->next;
		}
		if (closest == LONG_MAX)
			temp_b->target = min_node(*a);
		temp_b = temp_b->next;
	}
}

void	set_values_b(t_stack **b, t_stack **a)
{
	set_index(a);
	set_index(b);
	set_target_b(b, a);
}

void	cheapest_top_b(t_stack **b, t_stack *cheapest)
{
	if (!*b || !cheapest)
		return ;
	while (*b != cheapest)
	{
		if (cheapest->above_median)
			rb(b);
		else
			rrb(b);
	}
}

void	push_b(t_stack **a, t_stack **b)
{
	cheapest_top_a(a, (*b)->target);
	pa(b, a);
}
