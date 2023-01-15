/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:30:57 by jeolim            #+#    #+#             */
/*   Updated: 2023/01/15 16:51:46 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		if (ft_strlen(argv[i]) == len)  // 빈칸 갯수 == 총 길이 => 에러
			return (1);
	}
	if (total == argc - 1) // 빈칸 체크 : unused
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
		j = -1;
		while (argv[i][++j])
		{
			if ((argv[i][j] >= 9 && argv[i][j] <= 13) || argv[i][j] == ' ')
				continue ;
			if (argv[i][j] == '+' || argv[i][j] == '-')
			{
				// "11-4"같은 상황을 막기위해서-> 숫자 중간에 들어오는 부호 막기
				if (j != 0 && (argv[i][j - 1] > '0' && argv[i][j - 1] <= '9'))
					return (1);
			}
			else if (argv[i][j] < '0' || argv[i][j] > '9')  
				return (1);
		}
		i++;
	}
	return (0);
}

void	check_arg(int argc, char **argv)
{
	if (is_empty(argc, argv) || isnt_digit(argv))
		print_error();
	return ;
}

void	check_duplicate(int **result)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (result[i])
	{
		j = i + 1;
		while (result[j])
		{
			if (result[i] == result[j])
				print_error();
			j++;
		}
		i++;
	}
}
