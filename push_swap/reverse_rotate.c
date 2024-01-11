/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:38:34 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/04 13:46:20 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *a;
	last = ft_lstlast(*a);
	while (temp->next != last)
		temp = temp->next;
	ft_lstadd_front(a, last);
	temp->next = NULL;
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *b;
	last = ft_lstlast(*b);
	while (temp->next != last)
		temp = temp->next;
	ft_lstadd_front(b, last);
	temp->next = NULL;
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*last;
	t_stack	*temp;

	if (*a)
	{
		temp = *a;
		last = ft_lstlast(*a);
		while (temp->next != last)
			temp = temp->next;
		ft_lstadd_front(a, last);
		temp->next = NULL;
	}
	if (*b)
	{
		temp = *b;
		last = ft_lstlast(*b);
		while (temp->next != last)
			temp = temp->next;
		ft_lstadd_front(b, last);
		temp->next = NULL;
	}
	ft_printf("rrr\n");
}
