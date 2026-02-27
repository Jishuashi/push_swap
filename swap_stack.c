/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:57:23 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/19 16:40:49 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*swap_stack(char name, long *stack, int nb_nb)
{
	long	temp;

	if (nb_nb > 1)
	{
		temp = stack[0];
		stack[0] = stack[1];
		stack[1] = temp;
	}
	if (name == 'a')
		return ("sa\n");
	else if (name == 'b')
		return ("sb\n");
	else
		return ("Unknow Name of stack");
}
