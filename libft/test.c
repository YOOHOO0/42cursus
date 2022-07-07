/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:08:44 by seoshin           #+#    #+#             */
/*   Updated: 2022/07/07 16:14:33 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int	main(void)
{
	int x = 0;
	memset(&x, 1, sizeof(int));
	printf("%d\n", x);

	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = strnstr(largestring, smallstring, 6);
	printf("%s", ptr);
	
	printf("%d", isalnum(3));
	printf("%d", isalnum('3'));
	printf("%d", isprint(32));

}
