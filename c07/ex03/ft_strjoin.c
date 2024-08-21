/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avasilev <avasilev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:40:08 by avasilev          #+#    #+#             */
/*   Updated: 2024/08/20 16:16:02 by avasilev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strslen(int size, char **strs, char *sep)
{
	int	length;
	int	sep_length;
	int	i;

	length = 0;
	sep_length = 0;
	while (sep[sep_length])
		sep_length++;
	while (size > 0)
	{
		i = 0;
		while (strs[size - 1][i])
		{
			i++;
			length++;
		}
		if ((size - 1) > 0)
			length += sep_length;
		size--;
	}
	return (length + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		current_string_index;

	i = 0;
	current_string_index = -1;
	ptr = malloc(ft_strslen(size, strs, sep) * sizeof(char));
	while (size > ++current_string_index)
	{
		j = -1;
		while (strs[current_string_index][++j])
		{
			ptr[i] = strs[current_string_index][j];
			i++;
		}
		j = -1;
		while (sep[++j] && (size - 1) > current_string_index)
		{
			ptr[i] = sep[j];
			i++;
		}
	}
	ptr[i] = 0;
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char c1[] = "hello";
	char c2[] = "how are you today?";
	char c3[] = "♥";
	char sep[] = "	(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧";
	char *str[3];
	char *tab;
	str[0] = c1;
	str[1] = c2;
	str[2] = c3;
	tab = ft_strjoin(3, str, sep);
	printf("%s\n", tab);
	printf("%d\n", ft_strslen(3, str, sep));
	free(tab);
}*/
