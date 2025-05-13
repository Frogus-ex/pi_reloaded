/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlorette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:31:01 by tlorette          #+#    #+#             */
/*   Updated: 2025/04/25 16:46:47 by tlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if(f(tab[i]) == 1)
			nb++;
		i++;
	}
	return(nb);
}
/*
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("Nb : %d\n",ft_count_if(av + 1, &ft_strlen));
}*/
