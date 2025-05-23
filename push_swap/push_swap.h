/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbellar <anbellar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:54:04 by anbellar          #+#    #+#             */
/*   Updated: 2025/05/23 18:27:31 by anbellar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <error.h>
# include <limits.h>
# include "printf/ft_printf.h"

// STRUCT
typedef struct s_list
{
	int				content;
	int				index;
	int				median;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

typedef struct s_data
{
	int	*tab_b;
	int	*tab_a;
	int	*tab_b_tmp;
	int	*tab_a_tmp;
	int	lstsize_b;
	int	lstsize_a;
	int	median;
	int	biggest;
	int	smallest;
}	t_data;

// ALGO :
void	start_algo(t_list **stack_a, t_list **stack_b, int lstsize);
void	sort_mini(t_list **stack_a);

// ALGO_UTILS
void	sort_median(t_list **stack_a);
int		average_int(t_list **stack_a);
int		bigger_int(t_list **stack_a);

//	CHECK ERROR
void	check_error(char **str);
void	ft_error(char *msg);
int		check_good(t_list **stack_a);

//	OPERATION
void	rotate(t_list **stack);
void	pushstack(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//	LIBFT :
void	ft_lstclear(t_list **lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int data);
int		ft_lstsize(t_list **lst);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);

#endif