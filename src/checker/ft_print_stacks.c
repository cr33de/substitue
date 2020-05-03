/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker/checker.h"

void				ft_print_stacks(t_stacks *stacks)
{
	int		cntr;

	ft_putstr("\n\t\tSTACK A:\n");
	cntr = stacks->stk_a_t;
	while (stacks->stk_a_t < stacks->stk_size && cntr < stacks->stk_size)
	{
		ft_putstr("\t\t");
		ft_putnbr((stacks->stk_a)[cntr]);
		ft_putchar('\n');
		++cntr;
	}
	ft_putstr("\n\t\tSTACK B:\n");
	cntr = stacks->stk_b_t;
	while (stacks->stk_b_t < stacks->stk_size && cntr < stacks->stk_size)
	{
		ft_putstr("\t\t");
		ft_putnbr((stacks->stk_b)[cntr]);
		ft_putchar('\n');
		++cntr;
	}
	ft_putchar('\n');
}
