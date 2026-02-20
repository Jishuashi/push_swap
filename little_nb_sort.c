/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_nb_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:47:02 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/19 17:41:52 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*sort_three(long *a, int nb_nb);

long	*little_nb_sort(long *a, long *b, int nb_nb)
{
	a = index_tab(a, nb_nb);
	if (nb_nb == 2)
	{
		if (!is_sorted(a, nb_nb))
			ft_printf("%s", rotate_stack(a, 'a', nb_nb));
	}
	if (nb_nb == 3)
	{
		if (!is_sorted(a, nb_nb))
			sort_three(a, nb_nb);
	}
	free(b);
	return (a);
}

static long	*sort_three(long *a, int nb_nb)
{
	if (a[0] > a[1])
	{
		if (a[0] > a[2])
			ft_printf("%s", rotate_stack(a, 'a', nb_nb));
		if (a[0] > a [1])
			ft_printf("%s", swap_stack('a', a));
	}
	else
	{
		if (a[0] > a[2])
			ft_printf("%s", rrotate_stack(a, 'a', nb_nb));
	}
	return (a);
}
