/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 23:22:54 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 23:44:42 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*rotate_stack(long	*stack, char name, int nb_nb)
{
	long	temp;

	temp = stack[0];
	up_tab(stack, nb_nb);
	stack[nb_nb - 1] = temp;
	if (name == 'a')
		return ("ra\n");
	else
		return ("rb\n");
}
