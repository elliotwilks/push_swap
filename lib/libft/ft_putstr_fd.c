/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elwilks <elwilks@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:50:27 by elwilks           #+#    #+#             */
/*   Updated: 2025/09/09 19:30:46 by elwilks          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	DESCRIPTION :
	The function ft_putstr_fd writes the given string to the given
	file descriptor.

	RETURN VALUE :
	None.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
