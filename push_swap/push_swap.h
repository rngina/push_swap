/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <rtavabil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:56:39 by rtavabil          #+#    #+#             */
/*   Updated: 2024/01/05 12:20:07 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	long int		content;
	struct s_stack	*next;
	int				index;
	int				above_median;
	int				cost;
	int				cheapest;
	struct s_stack	*target;
}	t_stack;

int			ft_printf(const char *str, ...);
char		**ft_split(char *s, char c);
long int	ft_atol(char *str);
void		*ft_calloc(size_t nmemb, size_t size);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, long int content);
int			create_stack(t_stack **a, char **argv);
void		ft_lstclear(t_stack **lst);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*pop(t_stack **stack);
void		pa(t_stack **b, t_stack **a);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
int			is_sorted(t_stack *stack);
int			ft_lstsize(t_stack *lst);
void		free_error(t_stack **a);
void		set_index(t_stack **a);
void		set_target_a(t_stack **a, t_stack **b);
void		set_cost_a(t_stack **a, t_stack *b);
void		set_cheapest(t_stack **a);
t_stack		*get_cheapest(t_stack **a);
void		set_values_a(t_stack **a, t_stack **b);
void		set_values_b(t_stack **b, t_stack **a);
t_stack		*max_node(t_stack *stack);
t_stack		*min_node(t_stack *stack);
void		sort_three(t_stack **a);
void		cheapest_top_a(t_stack **a, t_stack *cheapest);
void		cheapest_top_b(t_stack **b, t_stack *cheapest);
void		push_a(t_stack **a, t_stack **b);
void		push_b(t_stack **a, t_stack **b);
void		algorithm(t_stack **a, t_stack **b);
void		check_size(t_stack **a);
void		free_split(char	**argv, int split);

#endif
