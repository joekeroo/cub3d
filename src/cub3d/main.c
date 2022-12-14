/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:13:24 by jhii              #+#    #+#             */
/*   Updated: 2022/08/31 18:53:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/cub3d.h"

static	int	argument_error_check(int argc)
{
	if (argc != 2)
	{
		ft_putstr_fd("Invalid number of arguments...\n", 2);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_cub	cub;

	if (argument_error_check(argc))
		return (1);
	if (parser(&cub, argv[1]))
		return (1);
	cub3d(&cub);
	return (0);
}
