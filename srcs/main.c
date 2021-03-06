/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:23:58 by vbeaufay          #+#    #+#             */
/*   Updated: 2021/05/04 17:16:09 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include "struct.h"
#include "parser.h"
#include "game.h"
#include "error.h"

int	main(int argc, char **argv)
{
	char	*test;
	t_cub3d	*data;

	test = NULL;
	free(test);
	if (argc <= 1 || argc > 3)
		ft_error("usage: cub3d file [--save]");
	if (argc == 3 && ft_strcmp(argv[2], "--save"))
		ft_error("usage: cub3d file [--save]");
	if (argc == 2 || argc == 3)
		data = cub_parser(argv[1]);
	if (argc == 3)
		data->save = 1;
	game_loop(data);
	free_data(data);
	return (0);
}
