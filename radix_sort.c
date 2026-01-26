/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:19:25 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 12:50:13 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*radix_sort(long *a, long *b, int nb_nb)
{
	(void)b;
	a = index_tab(a, nb_nb);
	if (!a)
		return (NULL);
	return (a);
}
