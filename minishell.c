/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:12:15 by eagbomei          #+#    #+#             */
/*   Updated: 2024/05/16 14:44:15 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	init_data(t_input *data, char **env)
{
	data->vars = set_env(env);
	rebuild_envp(data); //TODO
}


int	main(int ac, char **av, char **envp)
{
	t_input	input;
	char	*line;

	input.env = envp;
	init_data(&input, envp); //TODO
	while (1)
	{
		//do signals Eronom
		line = readline("babatunde: ");
		if (!line)
			break ;
		add_history(line);
		//pipex_main(ac, av, env);
		free(line);
	}
}