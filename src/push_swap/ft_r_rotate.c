/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_r_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:10:41 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:10:44 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap/push_swap.h"

void				ft_r_rotate(t_stacks *stacks, int mode)
{
	int		tmp;
	int		cntr;

	if (mode == 0 && (stacks->stk_size - 1) - stacks->stk_a_t >= 1)
	{
		tmp = (stacks->stk_a)[stacks->stk_size - 1];
		cntr = stacks->stk_size;
		while (--cntr - 1 >= stacks->stk_a_t)
			(stacks->stk_a)[cntr] = (stacks->stk_a)[cntr - 1];
		(stacks->stk_a)[stacks->stk_a_t] = tmp;
	}
	if (mode == 1 && (stacks->stk_size - 1) - stacks->stk_b_t >= 1)
	{
		tmp = (stacks->stk_b)[stacks->stk_size - 1];
		cntr = stacks->stk_size;
		while (--cntr - 1 >= stacks->stk_b_t)
			(stacks->stk_b)[cntr] = (stacks->stk_b)[cntr - 1];
		(stacks->stk_b)[stacks->stk_b_t] = tmp;
	}
	if (mode == 2)
		ft_r_rotate(stacks, 0);
	if (mode == 2)
		ft_r_rotate(stacks, 1);
}
