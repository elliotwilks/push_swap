/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:48:55 by elwilks           #+#    #+#             */
/*   Updated: 2025/09/09 19:11:13 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	if (size != 0 && count > ((size_t)-1) / size)
	{
		return (NULL);
	}
	r = malloc(count * size);
	if (!r)
	{
		return (NULL);
	}
	ft_bzero(r, count * size);
	return (r);
}
