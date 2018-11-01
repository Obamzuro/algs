/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 15:06:21 by obamzuro          #+#    #+#             */
/*   Updated: 2018/11/01 15:35:07 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	insertion_sort(int *arr, int size)
{
	int		i;
	int		j;
	int		temp;
	int		min;

	if (size == 1 || !size)
		return ;
	i = 1;
	while (i < size)
	{
		j = i - 1;
		min = arr[i];
		while (j >= 0 && min <= arr[j])
		{
			arr[j + 1] = arr[j];
			--j;
		}
		if (arr[j + 1] != min)
			arr[j + 1] = min;
		++i;
	}
}

int		main(void)
{
	int		i;
	int		arr[] = {4, 8, 13, 20, 13, 4, 15, 1, 0};

	insertion_sort(arr, sizeof(arr) / sizeof(*arr));
	i = 0;
	while (i < sizeof(arr) / sizeof(*arr))
		printf("%d ", arr[i++]);
}
