/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:06:57 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 16:26:55 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(long *a, long *b, int nb_nb)
{
	int	i;

	i = 0;
	ft_printf("Stacks\n---------\n");
	ft_printf("| A | B |\n");
	ft_printf("|---|---|\n");
	while (i < nb_nb)
	{
		if (a[i] < INT_MAX)
		{
			if (b[i] < INT_MAX)
				ft_printf("| %l | %l |\n", a[i], b[i]);
			else
				ft_printf("| %l |   |\n", a[i]);
		}
		else
		{
			if (b[i] < INT_MAX)
				ft_printf("|   |   |%\n", b[i]);
			else
				ft_printf("|   |   |\n", a[i]);
		}
		i++;
	}
	ft_printf("---------\n");
}
