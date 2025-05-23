/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 00:32:24 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 17:18:34 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*curr;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		ft_error("list too small");
	curr = *lst;
	last = *lst;
	while ((curr->next)->next)
		curr = curr->next;
	while (last->next)
		last = last->next;
	curr->next = NULL;
	last->next = *lst;
	*lst = last;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
