/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:23:36 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 23:09:14 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <limits.h>

int		check_args(int ac, char *av[]);
size_t	*create_tab_idx(size_t i, size_t j);
long	*get_args_array(long *tab, char *str, int nb_nb);
long	ft_atoi_long(const char *str);
char	*ft_get_str_nbr(int ac, char *av[]);
int		ft_count_nb(char *str);
char	*swap_stack(char name, long *stack);
char	*swap_all(long *a, long *b);
long	*up_tab(long *stack, int nb_nb);
long	*down_tab(long *stack, int nb_nb);
char	*push_stack(long *stack_src, long *stack_dest, char name, int nb_nb);

#endif