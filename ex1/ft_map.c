/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wadi.yawanseh <wadi.yawanseh@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:52:58 by wadi.yawanseh     #+#    #+#             */
/*   Updated: 2025/07/21 10:55:23 by wadi.yawanseh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	i = -1;
	*array = malloc(sizeof(int) * length);
	while (i++ < length)
		array[i] = f(tab[i]);
	return (array);
}
