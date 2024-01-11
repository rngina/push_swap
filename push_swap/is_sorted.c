/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:15:08 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 11:30:00 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	check_size(t_stack **a)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 1)
	{
		ft_lstclear(a);
		exit(0);
	}
	if (size == 2)
	{
		if (is_sorted(*a) == 0)
			sa(a);
		ft_lstclear(a);
		exit(0);
	}
}
