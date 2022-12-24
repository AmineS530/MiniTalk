/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:28:48 by asadik            #+#    #+#             */
/*   Updated: 2022/12/24 20:37:13 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handling_signal(int sig, siginfo_t *thingy, void *placeholder)
{
	static int		i;
	static char		owo;
	static pid_t	c_pid;

	(void)placeholder;
	if (!c_pid)
		c_pid = thingy->si_pid;
	if ((c_pid != thingy->si_pid))
	{
		c_pid = thingy->si_pid;
		i = 0;
		owo = 0;
	}
	owo = owo << 1 | (sig == SIGUSR2);
	if (++i == 8)
	{
		i = 0;
		if (!owo)
			kill(c_pid, SIGUSR2);
		ft_printf("%c", owo);
		owo = 0;
		kill(c_pid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("%sThe server's PID is ~> %d <~\n %s", YELLOW, getpid(), CYAN);
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
