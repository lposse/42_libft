/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 20:20:50 by lposse            #+#    #+#             */
/*   Updated: 2024/12/30 21:52:45 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	remaining;

	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (size > len_dest)
	{
		i = len_dest;
		remaining = (size - len_dest - 1);
		while (remaining-- && *src != '\0')
		{
			dest[i] = *src;
			i++;
			src++;
		}
		dest[i] = '\0';
	}
	return (len_dest + len_src);
}
