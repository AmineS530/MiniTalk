/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:02 by asadik            #+#    #+#             */
/*   Updated: 2022/12/17 15:18:30 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc == 3)
	{
		ft_printf("success");
	}
	else
	{
		ft_printf("Usage: ./client [PID] [String to send]");
	}
	return 0;
}
