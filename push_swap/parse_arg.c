/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:34:50 by jeolim            #+#    #+#             */
/*   Updated: 2022/11/12 22:42:23 by jeolim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

// duplicate
// already sorted

char	**get_arg(int argc, char **argv)
{
	char	*str;
	char	*ptr;
	char	**result;
	int		i;

	str = ft_strdup(argv[1]);
	if (!str)
		return (0);
	i = 2;
	while (i < argc)
	{
		ptr = str;
		str = ft_strjoin(str, " ");
		str = ft_strjoin(str, argv[i]);
		if (!str)
			return (0);
		free(ptr);
		i++;
	}
	result = ft_split(str, ' ');
	free(str);
	return (result);
}

void	make_arr(int *result, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_atoi(str[i]))
			result[j] = ft_atoi(str[i]);
			exit(1);
		free(str[i]);
		i++;
		j++;
	}
	free(str);
}

int	**parse_arg(int argc, char **argv)
{
	char	**str;
	int		*result;
	int		i;
	int		len;

	i = 2;
	check_arg(argc, argv);
	str = get_arg(argc, argv);
	len = 0;
	while (str[len])
		len++;
	printf("len : %d\n", i);
	result = ft_calloc(len, 4);
	if (!result)
		exit(1);
	make_arr(result, str);
	int idx;
	idx = 0;
	while (idx < len)
	{
		printf("%d : string >> %d\n", idx, result[idx]);
		idx++;
	}
	return (0);
}
