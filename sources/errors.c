/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:42:17 by feralves          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/25 19:49:11 by feralves         ###   ########.fr       */
=======
/*   Updated: 2023/02/25 05:37:50 by feralves         ###   ########.fr       */
>>>>>>> main
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *stack)
{
	if (stack == NULL)
		return ;
	ft_clear_node(stack->first);
	stack->first = NULL;
	stack->last = NULL;
	free(stack);
	stack = NULL;
}

void	ft_free_list(t_data **list)
{
	t_data	*aux;

	while (*list)
	{
		aux = *list;
		(*list) = (*list)->next;
		free (aux);
	}
	free (list);
}

//função para limpar algum tipo de arquivo
void	if_error(void *data, char a)
{
	ft_putstr_fd("Error\n", 2);
	if (a == 'l')
		ft_free_list(data);
	else if (a == 's')
		ft_free_stack(data);
	exit (1);
}

void	error_simple(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}
