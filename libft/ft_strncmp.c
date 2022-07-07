/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:02:35 by seoshin           #+#    #+#             */
/*   Updated: 2022/07/07 18:35:32 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	while(!(s1[i] == '\0' && s2[i] == '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	const char *s1 = "seoshin";
	const char *s2 = "seoshinn";
	printf("%d", ft_strncmp(s1, s2, 10));
}