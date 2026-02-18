/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:52:09 by elwilks           #+#    #+#             */
/*   Updated: 2025/09/09 19:45:08 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	The function ft_toupper converts a given lowercase letter c to its
	uppercase equivalent.

	RETURN VALUE :
	The uppercase equivalent letter.
	The original character c if c is not a lowercase letter.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
