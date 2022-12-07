/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 05:14:19 by emekinci          #+#    #+#             */
/*   Updated: 2022/12/02 05:14:24 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_push(t_stack *stack)
{
	int	indis;
	int	data1;
	int	data2;
	int	i;
	int	j;

	i = 0;
	while (i < ft_lstsize(stack))
	{
		indis = 0;
		data1 = ft_lstdata(stack, i);
		j = 0;
		while (j < ft_lstsize(stack))
		{
			data2 = ft_lstdata((stack), j);
			if (data1 > data2)
				indis++;
			j++;
		}
		ft_lstwhere(stack, i)->index = indis;
		i++;
		if (i == ft_lstsize(stack))
			return ;
	}
}

int	min_index(t_stack *stack, int i)
{
	int		j;

	j = 0;
	while (stack != NULL)
	{
		if (stack->index == i)
			return (j);
		else
		{
			stack = stack->next;
			j++;
		}
	}
	return (j);
}

void	ss(a_stack **a, b_stack **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void	rrr(a_stack **a, b_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
