/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:19:57 by seoshin           #+#    #+#             */
/*   Updated: 2022/07/07 15:14:21 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char	*src)
{
	size_t	k;

	k = 0;
	while (src[k] != '\0')
		k++;
	return (k);
}

char *ft_strrchr(const char *s, int c)
{
	size_t		idx;

	idx = ft_strlen(s);
	while (0 <= idx)
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx--;
	}
	return 0;
}

/*
int main()
{
	printf("%s", ft_strrchr("seoshin", 115));
}
*/