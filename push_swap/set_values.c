/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:01:40 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/04 14:01:27 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

t_stack	*max_node(t_stack *stack)
{
	t_stack	*max_node;

	max_node = stack;
	while (stack)
	{
		if (stack->content > max_node->content)
		{
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

void	set_index(t_stack **a)
{
	int		i;
	int		size;
	t_stack	*temp;

	i = 0;
	size = ft_lstsize(*a);
	temp = *a;
	while (*a)
	{
		(*a)->index = i;
		if (i <= size / 2)
			(*a)->above_median = 1;
		else
			(*a)->above_median = 0;
		(*a) = (*a)->next;
		i++;
	}
	*a = temp;
}

void	set_target_a(t_stack **a, t_stack **b)
{
	t_stack		*temp_a;
	t_stack		*temp_b;
	long int	closest;

	temp_a = *a;
	while (*a)
	{
		closest = LONG_MIN;
		temp_b = *b;
		while (temp_b)
		{
			if (((*a)->content > temp_b->content) \
			&& (temp_b->content > closest))
			{
				(*a)->target = temp_b;
				closest = temp_b->content;
			}
			temp_b = temp_b->next;
		}
		if (closest == LONG_MIN)
			(*a)->target = max_node(*b);
		*a = (*a)->next;
	}
	*a = temp_a;
}

void	set_cost_a(t_stack **a, t_stack *b)
{
	t_stack	*temp_a;
	int		len_a;
	int		len_b;

	temp_a = *a;
	len_a = ft_lstsize(*a);
	len_b = ft_lstsize(b);
	while (*a)
	{
		(*a)->cost = (*a)->index;
		if ((*a)->above_median == 0)
			(*a)->cost = len_a - (*a)->index;
		if ((*a)->target->above_median == 1)
			(*a)->cost += (*a)->target->index;
		else
			(*a)->cost += len_b - (*a)->target->index;
		(*a) = (*a)->next;
	}
	*a = temp_a;
}
