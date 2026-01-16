/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:50:12 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/16 21:47:16 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static long	*put_in_tab(long *tab, char *str, int nb_nb);
static int	is_double(long	*tab, int nb_nb);
static void	free_all(char **tab, int len);

long	*get_args_array(long *tab, char *str, int nb_nb)
{
	int		i;

	tab = (long *)malloc(sizeof(long) * nb_nb);
	if (!tab)
	{
		write(2, "Error\n", 7);
		exit(0);
	}
	tab = put_in_tab(tab, str, nb_nb);
	i = 0;
	while (i < nb_nb)
	{
		if (tab[i] > 2147483647 || tab[i] < -2147483648
			|| is_double(tab, nb_nb))
		{
			free(tab);
			write(2, "Error\n", 7);
			exit(0);
		}
		i++;
	}
	return (tab);
}

static long	*put_in_tab(long *tab, char *str, int nb_nb)
{
	char	**to_parsed;
	int		i;

	to_parsed = ft_split(str, ' ');
	i = 0;
	while (i < nb_nb)
	{
		tab[i] = ft_atoi_long(to_parsed[i]);
		i++;
	}
	free_all(to_parsed, nb_nb);
	return (tab);
}

static int	is_double(long	*tab, int nb_nb)
{
	long	temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < nb_nb)
	{
		temp = tab[j];
		i = 0;
		while (i < nb_nb)
		{
			if (temp == tab[i] && i != j)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

static void	free_all(char **tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
