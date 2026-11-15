/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadane <asaadane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 04:52:29 by asaadane          #+#    #+#             */
/*   Updated: 2022/12/18 23:01:43 by asaadane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*This function allows to print a single Character*/
void	ft_put_char(char c, int *lenght)
{
	write(1, &c, 1);
	*lenght += 1;
}
