/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:34:50 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/07 19:09:17 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

// duplicate
// already sorted

void	print_str(char *s)
{
	int	len;

	if (s == NULL)
	{
		write(1, "(null)", ft_strlen("(null)"));
		return ;
	}
	len = 0;
	while (s[len])
		len += write(1, &s[len], 1);
}

int	is_empty(int argc, char **argv)
{
	int		i;
	int		j;
	size_t	len;
	int		total;

	i = 0;
	total = 0;
	while (argv[++i])
	{
		j = -1;
		len = 0;
		while (argv[i][++j])
		{
			if ((argv[i][j] >= 9 && argv[i][j] <= 13) || argv[i][j] == ' ')
				len++;
			else
				break ;
		}
		if (ft_strlen(argv[i]) == len)
			total++;
	}
	if (total == argc - 1)
		return (1);
	return (0);
}

int	isnt_digit(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= 9 && argv[i][j] <= 13) || argv[i][j] == ' ' \
					|| argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			else if (argv[i][j] < '0' || argv[i][j] > '9')
				return (1);
			else
				j++;
		}
		i++;
	}
	return (0);
}

void	check_arg(int argc, char **argv)
{
	if (is_empty(argc, argv) || isnt_digit(argv))
	{
		print_str("ERROR");
		exit(1);
	}
	return ;
}

char	**parse_arg(int argc, char **argv)
{
	check_arg(argc, argv);
	return (0);
}
