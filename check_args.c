/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:25:08 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 16:54:25 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(int ac, char *av[])
{
	int		i;
	size_t	j;
	size_t	len;

	i = 1;
	while (i < ac)
	{
		j = 0;
		len = ft_strlen(av[i]);
		while (j < len)
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
