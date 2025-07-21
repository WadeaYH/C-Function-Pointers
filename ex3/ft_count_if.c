/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wadi.yawanseh <wadi.yawanseh@learner.42.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:58:24 by wadi.yawanseh     #+#    #+#             */
/*   Updated: 2025/07/21 11:04:03 by wadi.yawanseh    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;	

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
