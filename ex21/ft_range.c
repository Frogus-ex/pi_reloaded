/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:41:01 by tlorette          #+#    #+#             */
/*   Updated: 2025/04/25 13:36:41 by tlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int main()
{
    int *tab;
    int i;
	int min;
	int max;

	min = 30;
	max = 200;
    i = 0;
    tab = ft_range(min, max);
    while (min < max)
    {   
        printf("%d\n", tab[i]);
        i++;
		min++;
    }
	free(tab);
    return (0);
}
*/
