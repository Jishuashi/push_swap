/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:23:36 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/20 04:58:30 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define NULL_INT 2147483648
# include "./libft/libft.h"
# include <limits.h>

int		check_args(int ac, char *av[]);
long	*get_args_array(long *tab, char *str, int nb_nb);
long	ft_atoi_long(const char *str);
char	*ft_get_str_nbr(int ac, char *av[]);
int		ft_count_nb(char *str);
char	*swap_stack(char name, long *stack);
char	*swap_all(long *a, long *b);
long	*up_tab(long *stack, int nb_nb);
long	*down_tab(long *stack, int nb_nb);
char	*push_stack(long *stack_src, long *stack_dest, char name, int nb_nb);
char	*rotate_stack(long *stack, char name, int nb_nb);
char	*rrotate_stack(long *stack, char name, int nb_nb);
char	*rotate_all(long *stack_a, long	*stack_b, int nb_nb);
char	*rrotate_all(long *stack_a, long *stack_b, int nb_nb);
long	*radix_sort(long *a, long *b, int nb_nb);
long	*index_tab(long *stack, int nb_nb);
int		getlen_stack(long *stack, int nb_nb);
void	ft_print_stacks(long *a, long *b, int nb_nb);
long	*little_nb_sort(long *a, long *b, char *str, int nb_nb);
int		is_sorted(long *tab, int nb_nb);

#endif