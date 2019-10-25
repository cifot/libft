/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_nsym.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nharra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 00:39:11 by nharra            #+#    #+#             */
/*   Updated: 2019/10/26 00:47:10 by nharra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_join_nsym(char **s, int flag, int count, char c)
{
	char *tmp;

	tmp = ft_str_nsym(count, c);
	if (flag == 0)
		ft_join_beg(s, tmp);
	else
		ft_join(s, tmp);
	free(tmp);
	return (*s);
}
