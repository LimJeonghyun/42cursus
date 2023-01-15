/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeolim <jeolim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:34:50 by jeolim            #+#    #+#             */
/*   Updated: 2023/01/15 16:52:21 by jeolim           ###   ########.fr       */
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

int get_number(char *str)
{
	unsigned long long	num;
	int					sign;

	sign = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num > 2147483648 && sign == -1)
		print_error();
	if (num > 2147483647 && sign == 1)
		print_error();
	return ((int)(num * sign));
}

void	make_arr(int *result, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		result[j] = get_number(str[i]);
		free(str[i]);
		// printf("%d\n", result[j]);
		i++;
		j++;
	}
	free(str);
	check_duplicate(&result);
}

int	**parse_arg(int argc, char **argv)
{
	char	**str;
	int		*result;
	int		i;
	int		len;

	i = 2;
	check_arg(argc, argv);
	str = get_arg(argc, argv); //입력값 배열로 만들기 
	len = 0;
	// while (str[len])
	// {
	// 	printf("%d : %s\n", len, str[len]);
	// 	len++;	
	// }
	result = ft_calloc(len, 4);
	if (!result)
		exit(1);
	make_arr(result, str);
	printf("\ndone\n");
	// while (result[len])
	// {
	// 	printf("%d : %d", len, result[len]);
	// 	len++;	
	// }
	int idx;
	idx = 0;
	// while (idx < len)
	// {
	// 	printf("%d : string >> %d\n", idx, result[idx]);
	// 	idx++;
	// }
	return (0);
}
