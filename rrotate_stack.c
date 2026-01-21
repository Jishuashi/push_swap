/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:37:05 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 23:55:53 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*rrotate_stack(long *stack, char name, int nb_nb)
{
	int		i;
	long	temp;

	i = (nb_nb - 1);
	while (i > 0)
	{
		if (i > INT_MIN && i < INT_MAX)
		{
			temp = stack[i];
			break ;
		}
		i--;
	}
	down_tab(stack, nb_nb);
	stack[0] = temp;
	if (name == 'a')
		return ("rra\n");
	else
		return ("rrb\n");
}
