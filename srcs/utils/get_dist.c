/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naddino <naddino@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:22:20 by vbeaufay          #+#    #+#             */
/*   Updated: 2021/05/04 17:14:33 by naddino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "struct.h"

double	get_dist(t_point *f, t_point *t)
{
	return (sqrt(pow(f->x - t->x, 2) + pow(f->y - t->y, 2)));
}
