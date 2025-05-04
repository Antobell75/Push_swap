/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwsasd <dwsasd@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:47:29 by anso              #+#    #+#             */
/*   Updated: 2025/04/30 22:31:22 by dwsasd           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_mini(t_list **stack_a)
{
	int	maxint;

	maxint = bigger_int(stack_a);
	if (ft_lstsize(stack_a) == 2)
	{
		if ((*stack_a)->content > ((*stack_a)->next)->content)
			sa(stack_a);
		return ;
	}
	else
	{
		if ((*stack_a)->content == maxint)
			ra(stack_a);
		else if (((*stack_a)->next)->content == maxint)
			rra(stack_a);
		if ((*stack_a)->content > ((*stack_a)->next)->content)
			sa(stack_a);
	}
}

int	bigger_int(t_list **stack_a)
{
	int		biggest;
	t_list	*lst;

	lst = *stack_a;
	biggest = lst->content;
	while (lst->next)
	{
		if (biggest < (lst->next)->content)
			biggest = (lst->next)->content;
		lst = lst->next;
	}
	return (biggest);
}
