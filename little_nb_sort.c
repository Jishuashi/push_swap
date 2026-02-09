/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_nb_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:47:02 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/09 20:56:13 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*sort_three(long *a, long *b, int nb_nb);

long	*little_nb_sort(long *a, long *b, int nb_nb)
{
	(void)b;
	if (nb_nb == 2)
	{
		if (!is_sorted(a, nb_nb))
			ft_printf("%s", rotate_stack(a, 'a', nb_nb));
	}
	return (a);
}

static long	*sort_three(long *a, long *b, int nb_nb)
{
	return (a);
}
