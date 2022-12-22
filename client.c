/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:02 by asadik            #+#    #+#             */
/*   Updated: 2022/12/22 20:01:19 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	signal_send(int sign)
{
	static int	i;

	if (sign == SIGUSR1)
		i++;
}

static void	signal_handler(int s_pid, char *str)
{
	int		i;
	int		j;
	char	owo;

	i = 0;
	while (str[i])
	{
		j = 8;
		owo = str[i++];
		while (j)
		{
			if (owo >> j & 1)
				kill(s_pid, SIGUSR2);
			else
				kill(s_pid, SIGUSR1);
			j--;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		if (ft_atoi(argv[1]) <= 0)
			return (2);
		ft_printf("Characters Sent By The Client: %d \n", ft_strlen(argv[2]));
		signal(SIGUSR1, signal_send);
		signal(SIGUSR2, signal_send);
		signal_handler(ft_atoi(argv[1]), argv[2]);
	}
	else
	{
		ft_printf("Usage: ./client [PID] [String to send]\n");
		return (1);
	}
	return (0);
}
