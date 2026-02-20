/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:25:08 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/20 05:59:49 by hchartie         ###   ########.fr       */
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
		if (av[i][0] == '\0')
			return (0);
		while (j < len)
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-')
				return (0);
			if ((av[i][j] == '-' && !ft_isdigit(av[i][j + 1]))
				|| (av[i][j] == '-' && av[i][j - 1] != ' ' && j != 0))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
