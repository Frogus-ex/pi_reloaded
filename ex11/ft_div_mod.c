/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:56:46 by tlorette          #+#    #+#             */
/*   Updated: 2025/04/23 14:13:48 by tlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main ()
{
	int a = 10;
	int b = 10;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("after %d\n after %d\n", div, mod);
}*/
