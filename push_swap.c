/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/12 18:02:52 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	int	*a;
	int	*b;

	ft_printf("%s\n", av[1]);

	(void)a;
	(void)b;
	if (!check_args(ac, av))
	{
		write(2, "Error\n", 7);
		return (1);
	}
}
