/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:02 by asadik            #+#    #+#             */
/*   Updated: 2022/12/20 15:18:20 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	signal_send(int sign)
{
	static int	i;

	if (sign == SIGUSR1)
		i++;
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (ft_atoi(argv[1]) <= 0)
			return (2);
		ft_printf("Characters Sent By The Client: %d \n", ft_strlen(argv[2]));
	}
	else
	{
		ft_printf("Usage: ./client [PID] [String to send]\n");
		return (1);
	}
	return (0);
}
