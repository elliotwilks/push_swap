/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:52:06 by elwilks           #+#    #+#             */
/*   Updated: 2025/09/09 19:29:26 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_tolower converts a given uppercase letter c to its
	lowercase equivalent.

	RETURN VALUE :
	The lowercase equivalent letter.
	The original character c if c is not an uppercase letter.	
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
