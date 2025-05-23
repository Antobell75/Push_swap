/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:32:20 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 18:47:55 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushstack(t_list **stack_a, t_list **stack_b)
{
	t_list	*top;
	t_list	*tmp;

	if (!stack_a || !*stack_a)
		ft_error("empty stack");
	top = *stack_a;
	tmp = *stack_b;
	*stack_a = top->next;
	top->next = NULL;
	tmp->prev = top;
	ft_lstadd_front(stack_b, top);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	pushstack(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	pushstack(stack_a, stack_b);
	ft_printf("pb\n");
}
