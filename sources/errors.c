/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:42:17 by feralves          #+#    #+#             */
/*   Updated: 2023/01/29 13:21:29 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_data *data)
{
	if (data)
		free(data);
}

void	ft_free_stack(t_stack *stack)
{
	if (stack)
		free(stack);
}

void	if_error(void *data)
{
	ft_putstr_fd("Error", 2);
	ft_free(data);
	exit (1);
}