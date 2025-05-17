/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 04:56:08 by hmessaou          #+#    #+#             */
/*   Updated: 2025/05/17 04:59:01 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static int	g_signal;

void	sig_handler(int signum)
{
	if (signum == SIGUSR1)
		g_signal = 1;
	else if (signum == SIGUSR2)
		ft_printf("Bien recu \n");
}

void	char_to_bin(char c, int pid)
{
	int	bite_index;

	bite_index = 7;
	while (bite_index >= 0)
	{
		if ((c >> bite_index) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bite_index--;
		while (!g_signal)
			usleep(100);
		g_signal = 0;
	}
}

int	main(int ac, char **av)
{
	int	byte_index;
	int	pid;

	byte_index = 0;
	if (!(ac == 3))
		return (ft_printf("Mauvais nbr d'arguments"), 1);
	signal(SIGUSR1, &sig_handler);
	signal(SIGUSR2, &sig_handler);
	pid = ft_atoi(av[1]);
	if (pid <= 0 || kill(pid, 0))
		return (ft_printf("pid wrong"), 1);
	while (av[2][byte_index] != 0)
		char_to_bin(av[2][byte_index++], pid);
	if (byte_index > 0 && av[2][byte_index] == 0)
		char_to_bin('\0', pid);
}
