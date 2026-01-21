/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:37:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 23:48:33 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*rotate_all(long *stack_a, long	*stack_b, int nb_nb)
{
	rotate_stack(stack_a, 'a', nb_nb);
	rotate_stack(stack_b, 'b', nb_nb);
	return ("rr\n");
}
