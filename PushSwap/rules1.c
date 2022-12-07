/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 05:13:54 by emekinci          #+#    #+#             */
/*   Updated: 2022/12/02 05:13:55 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **list)
{
	t_stack	*list1;
	t_stack	*list2;

	list1 = (*list);
	list2 = (*list)->next;
	list1->next = list2->next;
	list2->next = list1;
	(*list) = list2;
}

void	sa(a_stack **a)
{
	swap(a);
	write (1, "sa\n", 3);
}

void	sb(b_stack **b)
{
	swap(b);
	write (1, "sb\n", 3);
}

void	ra(a_stack **a)
{
	a_stack	*first;
	a_stack	*last;

	last = ft_lstlast(*a);
	first = (*a);
	(*a) = (*a)->next;
	last->next = (first);
	first->next = NULL;
	write (1, "ra\n", 3);
}

void	rb(b_stack **b)
{
	b_stack	*first;
	b_stack	*last;

	last = ft_lstlast(*b);
	first = (*b);
	(*b) = (*b)->next;
	last->next = (first);
	first->next = NULL;
	write (1, "rb\n", 3);
}
