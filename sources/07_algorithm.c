/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarecho <mcarecho@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:30:50 by feralves          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:35 by mcarecho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/**
*@brief counts how many numbers are lower than the first number in the stack and
*returns the percentage of lower numbers
*@param stack the stack to be checked
*@return the percentage of lower numbers
*/
int	ft_calculate_lower(t_stack *stack, int size)
{
	t_node	*temp;
	int		count;
	int		start;
	int		result;

	temp = stack->first;
	count = 0;
	start = temp->data;
	while (temp)
	{
		if (!temp->next)
			break ;
		temp = temp->next;
		if (start > temp->data)
			count++;
	}
	result = (100 * count) / size;
	return (result);
}

/**
*@brief The algorithm that checks if 1/3 of A is lower or not, if it is, push it
*to B, else rotate A. Verify if B is part of the 2/3 higher numbers, if it is,
*nothing will be done, else rotate B. if both are false, double rotate
*@param stack_a the stack A
*@param stack_b the stack B
*@return none
*/
void	ft_algorithm(t_stack *stack_a, t_stack *stack_b)
{
	int	percentage_a;
	int	percentage_b;

	percentage_b = 0;
	while (stack_a->size > 5)
	{
		percentage_a = ft_calculate_lower(stack_a, stack_a->size);
		if (stack_b->size > 2)
			percentage_b = ft_calculate_lower(stack_b, stack_b->size);
		if (percentage_a <= 33 && percentage_b > 25)
		{
			ft_rotate(stack_b, 'b');
			ft_push(stack_a, stack_b, 'a');
		}
		else if (percentage_a <= 33 && percentage_b <= 25)
			ft_push(stack_a, stack_b, 'a');
		else if (percentage_a > 33 && percentage_b <= 25)
			ft_rotate(stack_a, 'a');
		else if (percentage_a > 33 && percentage_b > 25)
			ft_double_rotate(stack_a, stack_b);
	}
}
