/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42bangkok.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 14:06:23 by elwilks           #+#    #+#             */
/*   Updated: 2026/03/12 14:06:29 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(t_stack *a, t_stack *b)
{
	stack_free(a);
	stack_free(b);
	write(2, "Error\n", 6);
	exit(1);
}
