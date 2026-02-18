/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:49:38 by elwilks           #+#    #+#             */
/*   Updated: 2025/09/09 19:26:04 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	The function ft_isprint checks whether c is a printable character or not.

	RETURN VALUE :
	Non-zero if c is printable, zero if not.
*/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	return (0);
}
