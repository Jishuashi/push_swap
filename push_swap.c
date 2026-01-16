/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/16 15:39:24 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	char	*str;
	int		i;
	long	*a;
	long	*b;

	str = ft_get_str_nbr(ac, av);
	a = NULL;
	(void)b;
	if (!check_args(ac, av))
	{
		write(2, "Error\n", 7);
		return (1);
	}
	a = get_args_array(a, str);
	i = 0;
	while (i < ft_count_nb(str))
	{
		ft_printf("%l\n", a[i]);
		i++;
	}
}
