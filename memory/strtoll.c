/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtoll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 08:43:36 by nharra            #+#    #+#             */
/*   Updated: 2019/10/01 10:51:36 by nharra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtoll(long long num, unsigned base)
{
	unsigned long long	u_num;

	u_num = num;
	if (num >= 0)
	{
		return (ft_strtoull(u_num, base));
	}
	else
	{
		u_num = -u_num;
		return (ft_strtoull(u_num, base));
	}
}
