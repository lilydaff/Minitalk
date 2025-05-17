/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:17:03 by hmimouni          #+#    #+#             */
/*   Updated: 2025/05/17 04:44:50 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

char	*ft_string(char const c)
{
	char	*str;

	str = malloc(2);
	str[0] = c;
	str[1] = 0;
	return (str);
}

char	*ft_strjoin2(char *s1, char const s2)
{
	int		len;
	int		i;
	char	*str;

	if (s1 == NULL)
		return (ft_string(s2));
	len = ft_strlen(s1) + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i++] = s2;
	str[i] = '\0';
	free(s1);
	return (str);
}

void	display_str(unsigned char c, siginfo_t *info)
{
	static char	*str = NULL;

	if (c == 0)
	{
		ft_putstr_fd(str, 1);
		ft_putstr_fd("\n", 1);
		kill(info->si_pid, SIGUSR2);
		free(str);
		str = NULL;
	}
	else
	{
		str = ft_strjoin2(str, c);
	}
}

void	bin_to_char(int signum, siginfo_t *info, void *context)
{
	static int	bit;
	static char	c;

	(void)context;
	if (signum == SIGUSR1)
		c = (c << 1) | 1;
	else if (signum == SIGUSR2)
		c <<= 1;
	if (bit < 7)
		bit++;
	else
	{
		display_str(c, info);
		c = 0;
		bit = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(int argc, char **argv)
{
	struct sigaction	sig;

	(void)argv;
	if (argc != 1)
		return (ft_printf("Error\n"), 1);
	sigemptyset(&sig.sa_mask);
	sig.sa_flags = SA_SIGINFO;
	sig.sa_sigaction = &bin_to_char;
	sigaction(SIGUSR1, &sig, NULL);
	sigaction(SIGUSR2, &sig, NULL);
	ft_printf("PID SERVER : %d\n", getpid());
	while (1)
		pause();
	return (0);
}
