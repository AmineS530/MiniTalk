/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:51:27 by asadik            #+#    #+#             */
/*   Updated: 2022/12/22 20:48:58 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static	void	handling_signal(pid_t sig, siginfo_t *stuff, void *placeholder)
{
}

int	main(void)
{
	struct sigaction	action;

	ft_printf("The server's PID is %d\n", getpid());
	while (TRUE)
	{
		pause();
	}
	return (0);
}
