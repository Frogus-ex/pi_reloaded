/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:26:46 by tlorette          #+#    #+#             */
/*   Updated: 2025/04/23 13:43:27 by tlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 1;
	printf("avant a = %d\n avant b = %d", a, b);
	ft_swap(&a, &b);
	printf("\nafter a = %d\n after b = %d", a, b);
}*/
