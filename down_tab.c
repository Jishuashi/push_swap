/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:22:42 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/19 14:28:12 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*down_tab(long *stack, int nb_nb)
{
	int		i;
	long	temp;

	i = nb_nb;
	while (i > 0)
	{
		temp = stack[i - 1];
		if ((i - 1) != 0)
			stack[i - 1] = stack[i];
		else
			stack[i] = NULL;
		i++;
	}
	return (stack);
}
