/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaya <schaya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:08:40 by schaya            #+#    #+#             */
/*   Updated: 2020/11/15 19:59:27 by schaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str(char *big, char *little, int len)
{
	char	*little1;
	char	*big1;
	int		flag;

	if (*little == *big)
	{
		little1 = (char *)little;
		big1 = (char *)big;
		flag = 1;
		while (*little1 != '\0')
		{
			if (*little1 != *big1)
				flag = 0;
			little1++;
			big1++;
			len--;
		}
		if (len <= 0)
			return (0);
		if (flag == 1)
			return (1);
	}
	return(0);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*little1;
	char	*big1;
	int		flag;

	if (little == big || *little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big != '\0' && len > 0)
	{
		if (ft_str(big, little, len) == 1)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*
int main (void)
{
   // Массив источник данных
   unsigned char src[15]="abcdef";

   // Массив приемник данных
   unsigned char dst[15]="bc";
   // Копируем данные из массива src в массив dst
   

   // Вывод массива dst на консоль
   printf ("dst: %s\n",ft_strnstr(src, dst, 3));

   return 0;
}
*/