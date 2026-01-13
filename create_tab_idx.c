/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab_idx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:31:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/12 17:41:34 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	*create_tab_idx(size_t i, size_t j)
{
	size_t	*res;

	res = (size_t *)malloc(sizeof(size_t) * 2);
	if (!res)
		return (NULL);
	res[0] = i;
	res[1] = j;
	return (res);
}
