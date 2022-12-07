/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 05:13:07 by emekinci          #+#    #+#             */
/*   Updated: 2022/12/02 05:13:08 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *list)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *list)
{
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	return (list);
}

t_stack	*ft_lstwhere(t_stack *list, int c)
{
	int	i;

	i = 0;
	if (!list)
		return (0);
	while (list != NULL && i < c)
	{
		list = list->next;
		i++;
	}
	return (list);
}

int	ft_lstdata(t_stack *list, int c)
{
	int	data;
	int	i;

	i = 0;
	while (i <= c && list != NULL)
	{
		data = list->content;
		list = list->next;
		i++;
	}
	return (data);
}
