/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 17:40:44 by lposse            #+#    #+#             */
/*   Updated: 2024/12/30 18:39:47 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static void	ft_xora(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	ptr_dest += n;
	ptr_src += n;
	while (n--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest--;
		ptr_src--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (ptr_dest == ptr_src)
		return (dest);
	if (ptr_dest < ptr_src)
	{
		while (n--)
		{
			*ptr_dest = *ptr_src;
			ptr_dest++;
			ptr_src++;
		}
	}
	else
		ft_xora(dest, src, n);
	return (dest);
}
