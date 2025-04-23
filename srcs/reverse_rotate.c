/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:32:24 by anbellar          #+#    #+#             */
/*   Updated: 2025/04/11 15:06:01 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*curr;
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		ft_error();
	curr = *stack_a;
	last = *stack_a;
	while ((curr->next)->next)
		curr = curr->next;
	while (last->next)
		last = last->next;
	curr->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	t_list	*curr;
	t_list	*last;

	if (!stack_b || !*stack_b || !(*stack_b)->next)
		ft_error();
	curr = *stack_b;
	last = *stack_b;
	while ((curr->next)->next)
		curr = curr->next;
	while (last->next)
		last = last->next;
	curr->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*curr;
	t_list	*last;

	if ((!stack_a || !*stack_a || !(*stack_a)->next)
		&& (!stack_b || !*stack_b || !(*stack_b)->next))
		ft_error();
	curr = *stack_a;
	last = *stack_a;
	while ((curr->next)->next)
		curr = curr->next;
	while (last->next)
		last = last->next;
	curr->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	curr = *stack_b;
	last = *stack_b;
	while ((curr->next)->next)
		curr = curr->next;
	while (last->next)
		last = last->next;
	curr->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	ft_printf("rrr\n");
}
