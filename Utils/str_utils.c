/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:12:27 by eagbomei          #+#    #+#             */
/*   Updated: 2024/08/05 19:13:15 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (2);
	if (!s1[i] || !s2[i])
		return (1);
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (2);
		i++;
	}
	return (0);
}
