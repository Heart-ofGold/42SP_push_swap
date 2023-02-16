/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:52:08 by feralves          #+#    #+#             */
/*   Updated: 2023/02/15 23:04:44 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	ft_swap(int *a, int *b)
// {
// 	int temp;

// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// // void	ft_print_moves(char *move)
// // {
// // 	if (move = )
// // 	ft_putstr_fd(move, 1);
// // }

void	ft_clear_node(t_node *node)
{
	t_node	*aux;

	if (node == NULL)
		return ;
	while (node)
	{
		aux = node->next;
		node->next = NULL;
		node->prev = NULL;
		free(node);
		node = aux;
	}
}
