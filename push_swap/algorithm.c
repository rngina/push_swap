/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:29:44 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 10:55:54 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_min(t_stack **a)
{
	t_stack	*min;

	min = min_node(*a);
	while (*a != min)
	{
		if (min->above_median)
			ra(a);
		else
			rra(a);
	}
}

void	algorithm(t_stack **a, t_stack **b)
{
	int		size;

	size = ft_lstsize(*a);
	if (size-- > 3 && is_sorted(*a) == 0)
		pb(a, b);
	if (size-- > 3 && is_sorted(*a) == 0)
		pb(a, b);
	while (size > 3 && is_sorted(*a) == 0)
	{
		set_values_a(a, b);
		push_a(a, b);
		size--;
	}
	sort_three(a);
	while (*b)
	{
		set_values_b(b, a);
		push_b(a, b);
	}
	set_index(a);
	sort_min(a);
}

	// b_copy = NULL;
	// while (*b)
	// {
	// 	if ((*b)->next)
	// 		b_copy = (*b)->next;
	// 	else
	// 		b_copy = NULL;
	// 	set_values_b(b, a);
	// 	push_b(a, b);
	// 	*b = b_copy;
	// }
	// set_index(a);
	// sort_min(a);
