/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   down_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:22:42 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 15:00:54 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*down_tab(long *stack, int nb_nb)
{
	int		i;
	long	temp;

	i = nb_nb;
	temp = 0;
	while (i > 0)
	{
		if ((i - 1) >= 0)
		{
			temp = stack[i - 1];
			stack[i - 1] = stack[i];
			stack[i] = temp;
		}
		i--;
	}
	stack[i] = 2147483648;
	return (stack);
}
