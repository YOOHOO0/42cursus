/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoshin <seoshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:18:29 by seoshin           #+#    #+#             */
/*   Updated: 2023/02/24 04:00:55 by seoshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_one(int num, t_deque *deque)
{
	t_node	*node;

	node = deque->top;
	while(node)
	{
		if (node->data == num)
			print_emsg(deque);
		node = node->next;
	}
	return (1);
}

static int	is_int(char **av)
{
	int	i;
	int j;

	i = 1;
	while(av[i])
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
			j++;
		while(av[i][j])
		{
			if (av[i][j] < '0' || '9' < av[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	str_to_int(int ac, char **av, t_deque *deque)
{
	int	i;
	int	num;

	i = 1;
	while (i < ac)
	{
		num = ft_atoi(av[i++], deque);
		if (is_one(num, deque))
			append(deque, num);
	}
}

void	input(int ac, char **av, t_deque *deque)
{
	if (!is_int(av))
		print_emsg(deque);
	str_to_int(ac, av, deque);
}

void	put_arr(int *arr, t_deque *deque)
{
	t_node	*node;
	int		i;

	node = deque->top;
	i = 0;
	while (node)
	{
		arr[i] = node->data;
		node = node->next;
		i++;
	}
}