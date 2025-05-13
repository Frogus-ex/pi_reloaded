/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:17:32 by tlorette          #+#    #+#             */
/*   Updated: 2025/04/25 12:59:13 by tlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
}*/
