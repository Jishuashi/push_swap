/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:45:12 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/19 12:55:54 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*swap_all(long *a, long *b, int nb_nb)
{
	swap_stack('a', a, nb_nb);
	swap_stack('b', b, nb_nb);
	return ("ss");
}
