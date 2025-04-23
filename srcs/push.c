/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:32:20 by anbellar          #+#    #+#             */
/*   Updated: 2025/04/23 23:26:47 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushstack(t_list **stack_a, t_list **stack_b)
{
	t_list	*top;

	if (!stack_a || !*stack_a)
		ft_error();
	top = *stack_a;
	*stack_a = top->next;
	top->next = NULL;
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
