/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:51:27 by asadik            #+#    #+#             */
/*   Updated: 2022/12/23 20:05:52 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

pid_t	global_pid = 0;

static void	handling_signal(int sig, siginfo_t *thingy, void *placeholder)
{
	static int	i;
	static char	owo;

	(void)placeholder;
	if ((global_pid != thingy->si_pid) || !global_pid)
	{
		global_pid = thingy->si_pid;
		i = 0;
		owo = 0;
	}
	owo = owo << 1 | (sig == SIGUSR1);
	if (++i == 8)
	{
		i = 0;
		if (!owo)
		{
			kill(global_pid, SIGUSR1);
			global_pid = 0;
			return ;
		}
		ft_printf("%s%c", CYAN, owo);
		owo = 0;
		kill(global_pid, SIGUSR2);
	}
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("%sThe server's PID is ~> %d <~\n", YELLOW, getpid());
	action.__sigaction_u.__sa_sigaction = handling_signal;
	action.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	while (TRUE)
		pause();
	return (0);
}
