/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:14:57 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 22:51:06 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*up_tab(long *stack, int nb_nb)
{
	int		i;

	i = 0;
	while (i < nb_nb)
	{
		if ((i + 1) != nb_nb)
			stack[i] = stack[(i + 1)];
		i++;
	}
	stack[nb_nb - 1] = __LONG_MAX__;
	return (stack);
}
