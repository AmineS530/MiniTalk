/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:02 by asadik            #+#    #+#             */
/*   Updated: 2022/12/19 16:14:19 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (ft_atoi(argv[1]) <= 0)
			return (2);
		ft_printf("Characters Sent By The Client: %d \n", ft_strlen(argv[2]));
	}
	else
	{
		ft_printf("Usage: ./client [PID] [String to send]");
		return (1);
	}
	return (0);
}
