/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:00:43 by anbellar          #+#    #+#             */
/*   Updated: 2025/04/16 17:07:26 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int data)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (result == NULL)
		return (NULL);
	result->content = data;
	result->next = NULL;
	return (result);
}

int	ft_lstsize(t_list **lst)
{
	t_list	*tmp;
	int		i;

	tmp = *lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		ft_error();
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		ft_error();
	new->next = NULL;
	if (new && lst && *lst)
		ft_lstlast(*lst)->next = new;
	else if (new)
		*lst = new;
}
