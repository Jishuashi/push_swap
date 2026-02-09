/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 22:53:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/09 20:30:32 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_empty(long *stack, int nb_nb);

char	*push_stack(long *stack_src, long *stack_dest, char name, int nb_nb)
{
	long	temp;

	if (is_empty(stack_src, nb_nb) == 1)
	{
		if (name == 'a')
			return ("pa\n");
		else
			return ("pb\n");
	}
	temp = stack_src[0];
	stack_src = up_tab(stack_src, nb_nb);
	stack_dest = down_tab(stack_dest, nb_nb);
	stack_dest[0] = temp;
	if (name == 'a')
		return ("pa\n");
	else
		return ("pb\n");
}

static int	is_empty(long *stack, int nb_nb)
{
	int	i;

	i = 0;
	while (i < nb_nb)
	{
		if (stack[i] > INT_MIN && stack[i] < INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
