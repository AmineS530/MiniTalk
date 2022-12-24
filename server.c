/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:51:27 by asadik            #+#    #+#             */
/*   Updated: 2022/12/24 15:56:43 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

pid_t	g_pid = 0;

static void	handling_signal(int sig, siginfo_t *thingy, void *placeholder)
{
	static int	i;
	static char	owo;

	(void)placeholder;
	if (!g_pid)
		g_pid = thingy->si_pid;
	if ((g_pid != thingy->si_pid))
	{
		g_pid = thingy->si_pid;
		i = 0;
		owo = 0;
	}
	owo = owo << 1 | (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!owo)
		{
			kill(g_pid, SIGUSR2);
			g_pid = 0;
			return ;
		}
		ft_printf("%s%c", CYAN, owo);
		owo = 0;
		kill(g_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("%sThe server's PID is ~> %d <~\n", YELLOW, getpid());
	action.__sigaction_u.__sa_sigaction = handling_signal;
	action.sa_flags = SA_SIGINFO;
	while (TRUE)
	{
		sigaction(SIGUSR1, &action, NULL);
		sigaction(SIGUSR2, &action, NULL);
		pause();
	}
	return (0);
}
