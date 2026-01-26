/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlen_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:22:39 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 15:11:21 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getlen_stack(long *stack, int nb_nb)
{
	int	i;

	i = 0;
	while (i < nb_nb)
	{
		if (stack[i] > INT_MAX)
			break ;
		i++;
	}
	i++;
	return (i);
}
