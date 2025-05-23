/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:58:09 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 17:18:31 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->content);
		lst = lst->next;
	}
}

void	put_elem(t_list **stack_a, char **str)
{
	int		i;

	i = 0;
	check_error(str);
	while (str[i])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
}

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (!(ac > 2))
		ft_error("not enough args");
	put_elem(&stack_a, av + 1);
	if (check_good(&stack_a))
		return (0);
	start_algo(&stack_a, &stack_b, ft_lstsize(&stack_a));
	print_list(stack_a);
	print_list(stack_b);
	ft_lstclear(&stack_a);
}
