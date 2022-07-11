/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 20:44:27 by seoshin           #+#    #+#             */
/*   Updated: 2022/07/10 20:44:27 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	int				i;

	to = (unsigned char *) dst;
	from = (unsigned char *) src;
	if (src < dst)
	{
		i = (int)(len - 1);
		while (0 <= i)
		{
			to[i] = from[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return ((void *)to);
}
