/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:30:14 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 18:32:37 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **lst)
{
	t_list	*first;
	t_list	*second;
	t_list	*prev;

	if (!lst || !(*lst) || !(*lst)->next)
		ft_error("list too small");
	first = *lst;
	second = first->next;
	prev = second->prev;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = first;
	*lst = second;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
