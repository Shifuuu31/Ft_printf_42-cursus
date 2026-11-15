/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_lowhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 08:22:59 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/13 08:24:15 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print lowercase hexadecimal numbers*/
void	ft_put_lowhex(unsigned int num, int *lenght)
{
	const char	*basex;

	basex = "0123456789abcdef";
	if (num < 16)
		ft_put_char(basex[num], lenght);
	else
	{
		ft_put_lowhex((num / 16), lenght);
		ft_put_char(basex[num % 16], lenght);
	}
}
