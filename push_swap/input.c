/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:01:15 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 12:21:16 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	check_numerics(char *s)
{
	if (!(*s == '+' || *s == '-' || (*s >= '0' && *s <= '9')))
		return (1);
	if ((*s == '+' || *s == '-' ) && (!(*(s + 1) >= '0' && *(s + 1) <= '9')))
		return (1);
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			s++;
		else
			return (1);
	}
	return (0);
}

static int	check_duplicate(t_stack *a, long int num)
{
	while (a)
	{
		if (a->content == num)
			return (1);
		a = a->next;
	}
	return (0);
}

static int	check_argv(t_stack **a, char *argv, long int *num)
{
	if (check_numerics(argv) == 1)
		return (1);
	*num = ft_atol(argv);
	if (*num > INT_MAX || *num < INT_MIN)
		return (1);
	if (check_duplicate(*a, *num) == 1)
		return (1);
	return (0);
}

int	create_stack(t_stack **a, char **argv)
{
	int			i;
	long int	num;

	i = 1;
	while (argv[i])
	{
		if (check_argv(a, argv[i], &num) == 1)
			return (1);
		ft_lstadd_back(a, num);
		i++;
	}
	return (0);
}

void	free_split(char **argv, int split)
{
	int	i;

	if (split == 1)
	{
		i = 1;
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
}
