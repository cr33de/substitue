/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack_rem_val.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:10:41 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:10:44 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap/push_swap.h"

void			ft_call_swap_a(t_stacks *stacks)
{
	ft_swap(stacks, 0);
	ft_putstr("sa\n");
}

void			ft_call_rra_and_sa(t_stacks *stacks)
{
	ft_call_r_rotate_a(stacks);
	ft_call_swap_a(stacks);
}

void			ft_call_ra_and_sa(t_stacks *stacks)
{
	ft_call_rotate_a(stacks);
	ft_call_swap_a(stacks);
}

void			ft_sort_stack_rem_val(t_stacks *s)
{
	if ((s->stk_size - 1) - s->stk_a_t == 1)
		ft_call_swap_a(s);
	if ((s->stk_size - 1) - s->stk_a_t == 2)
	{
		if ((s->stk_a)[s->stk_a_t] < (s->stk_a)[s->stk_a_t + 1] &&
			(s->stk_a)[s->stk_a_t + 1] > (s->stk_a)[s->stk_a_t + 2] &&
			(s->stk_a)[s->stk_a_t + 2] > (s->stk_a)[s->stk_a_t])
			ft_call_rra_and_sa(s);
		if ((s->stk_a)[s->stk_a_t] > (s->stk_a)[s->stk_a_t + 1] &&
			(s->stk_a)[s->stk_a_t + 1] < (s->stk_a)[s->stk_a_t + 2] &&
			(s->stk_a)[s->stk_a_t + 2] > (s->stk_a)[s->stk_a_t])
			ft_call_swap_a(s);
		if ((s->stk_a)[s->stk_a_t] < (s->stk_a)[s->stk_a_t + 1] &&
			(s->stk_a)[s->stk_a_t + 1] > (s->stk_a)[s->stk_a_t + 2] &&
			(s->stk_a)[s->stk_a_t + 2] < (s->stk_a)[s->stk_a_t])
			ft_call_r_rotate_a(s);
		if ((s->stk_a)[s->stk_a_t] > (s->stk_a)[s->stk_a_t + 1] &&
			(s->stk_a)[s->stk_a_t + 1] > (s->stk_a)[s->stk_a_t + 2] &&
			(s->stk_a)[s->stk_a_t + 2] < (s->stk_a)[s->stk_a_t])
			ft_call_ra_and_sa(s);
		if ((s->stk_a)[s->stk_a_t] > (s->stk_a)[s->stk_a_t + 1] &&
			(s->stk_a)[s->stk_a_t + 1] < (s->stk_a)[s->stk_a_t + 2] &&
			(s->stk_a)[s->stk_a_t + 2] < (s->stk_a)[s->stk_a_t])
			ft_call_rotate_a(s);
	}
}
