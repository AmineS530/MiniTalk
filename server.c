#include "minitalk.h"

int  main(void)
{
	ft_printf("The server's PID is %d", getpid());
	while (1)
	{
		pause();
	}
}
