/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:06:43 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 10:57:18 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack **a)
{
	long int	cheapest;
	t_stack		*temp_a;
	t_stack		*cheapest_node;

	if (!*a)
		return ;
	cheapest = LONG_MAX;
	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->cost < cheapest)
		{
			cheapest = temp_a->cost;
			cheapest_node = temp_a;
		}
		temp_a->cheapest = 0;
		temp_a = temp_a->next;
	}
	cheapest_node->cheapest = 1;
}

t_stack	*get_cheapest(t_stack **a)
{
	t_stack	*temp_a;

	if (!*a)
		return (NULL);
	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->cheapest == 1)
			return (temp_a);
		temp_a = temp_a->next;
	}
	return (NULL);
}

void	set_values_a(t_stack **a, t_stack **b)
{
	set_index(a);
	set_index(b);
	set_target_a(a, b);
	set_cost_a(a, *b);
	set_cheapest(a);
}

void	cheapest_top_a(t_stack **a, t_stack *cheapest)
{
	while (*a != cheapest)
	{
		if (cheapest->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	push_a(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(a);
	if (cheapest->above_median && cheapest->target->above_median)
	{
		while (*b != cheapest->target && *a != cheapest)
			rr(a, b);
		set_index(a);
		set_index(b);
	}
	else if (!(cheapest->above_median) && !(cheapest->target->above_median))
	{
		while (*b != cheapest->target && *a != cheapest)
			rrr(a, b);
		set_index(a);
		set_index(b);
	}
	cheapest_top_a(a, cheapest);
	cheapest_top_b(b, cheapest->target);
	pb(a, b);
}
