/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:57:23 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/19 12:46:17 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*swap_stack(char name, long *stack)
{
	long	temp;

	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	if (name == 'a')
		return ("sa");
	else if (name == 'b')
		return ("sb");
	else
		return ("Unknow Name of stack");
}
