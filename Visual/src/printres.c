/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printres.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:49:45 by wmaykit           #+#    #+#             */
/*   Updated: 2019/06/11 23:48:51 by cwitting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		printone(t_stack *one, unsigned x)
{
	if (!(one->res))
		ft_putchar('.');
	else if (one->res->x == x)
		ft_putchar(one->res->name);
	else if (one->res->right->x == x)
		ft_putchar(one->res->right->name);
	else if (one->res->right->right->x == x)
		ft_putchar(one->res->right->right->name);
	else if (one->res->right->right->right->x == x)
		ft_putchar(one->res->right->right->right->name);
}

void			printres(t_stack *res)
{
	t_stack		*start;
	unsigned	x;
	unsigned	sqr;

	x = 1;
	sqr = res->edge * res->edge;
	while (x <= sqr)
	{
		start = res->right;
		while (start->res &&start->res->x != x && start->res->right->x != x &&
				start->res->right->right->x != x &&
				start->res->right->right->right->x != x)
			start = start->right;
		printone(start, x);
		if (!(x % res->edge))
			ft_putchar('\n');
		++x;
	}
}
