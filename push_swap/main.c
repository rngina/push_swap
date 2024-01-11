/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:46:01 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 12:42:27 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort(t_stack **a, t_stack **b)
{
	check_size(a);
	algorithm(a, b);
	ft_lstclear(a);
	ft_lstclear(b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		check;
	int		split;

	a = NULL;
	b = NULL;
	split = 0;
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		split = 1;
		if (argv == NULL || !argv[1])
			free_error(&a);
	}
	check = create_stack(&a, argv);
	free_split(argv, split);
	if (check == 1)
		free_error(&a);
	sort(&a, &b);
	return (0);
}
