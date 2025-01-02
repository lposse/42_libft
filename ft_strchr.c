/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lposse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 19:16:45 by lposse            #+#    #+#             */
/*   Updated: 2025/01/01 19:28:40 by lposse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;
	int		i;

	ptr_s = s;
	i = 0;
	while (ptr_s[i] != '\0' && ptr_s[i] != c)
		i++;
	if (ptr_s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
