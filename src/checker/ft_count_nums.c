/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker/checker.h"

int				ft_count_nums(const char *str)
{
	int		cntr;
	int		num_cnt;
	_Bool	swtch;

	cntr = 0;
	num_cnt = 0;
	swtch = 0;
	while (str[cntr])
	{
		if ((str[cntr] == '+' || str[cntr] == '-' || (str[cntr] >= '0' &&
			str[cntr] <= '9')) && !swtch)
		{
			++num_cnt;
			swtch = 1;
		}
		if ((str[cntr] >= 9 && str[cntr] <= 13) || str[cntr] == 32)
			swtch = 0;
		++cntr;
	}
	return (num_cnt);
}
