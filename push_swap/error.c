/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:15:26 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/04 16:59:35 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = (*lst)->next;
		free(*lst);
		*lst = node;
	}
	*lst = NULL;
}

void	free_error(t_stack **a)
{
	ft_lstclear(a);
	write(2, "Error\n", 6);
	exit(1);
}
