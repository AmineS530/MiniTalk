/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:27:02 by asadik            #+#    #+#             */
/*   Updated: 2022/12/23 20:05:04 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	signal_cmp(int placeholder)
{
	if (placeholder == SIGUSR2)
		return ;
}

int	pid_checker(char *argv1)
{
	int	owo;
	int	i;

	owo = ft_strlen(argv1);
	i = 0;
	while (i < owo)
	{
		if (ft_isdigit(argv1[i]))
			i++;
		else
			return (0);
	}
	if (ft_atoi(argv1) > 1)
		return (42069);
	return (0);
}

static void	signal_handler(int s_pid, char *str)
{
	int		i;
	int		j;
	char	owo;

	i = 0;
	while (str[i])
	{
		j = 7;
		owo = str[i++];
		while (j >= 0)
		{
			if (owo >> j & 1)
				kill(s_pid, SIGUSR1);
			else
				kill(s_pid, SIGUSR2);
			j--;
			usleep(750);
		}
	}
}

int	main(int argc, char *argv[])
{
	pid_t	the_pid;

	if (argc == 3)
	{
		if (pid_checker(argv[1]) == 42069)
			the_pid = ft_atoi(argv[1]);
		else
		{
			ft_printf("%sThe PID can't contain characters,", RED);
			ft_printf("%s and it must be greater than 1\n", RED);
			return (2);
		}
		ft_printf("%sCharacters Sent From The Client: %d\n",
			GREEN, ft_strlen(argv[2]));
		signal(SIGUSR1, signal_cmp);
		signal(SIGUSR2, signal_cmp);
		signal_handler(the_pid, argv[2]);
	}
	else
	{
		ft_printf("%sUsage: ./client [PID] [String to send]\n", RED);
		return (1);
	}
	return (0);
}
