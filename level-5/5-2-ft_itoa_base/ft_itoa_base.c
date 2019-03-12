/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angavrel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 22:36:30 by angavrel          #+#    #+#             */
/*   Updated: 2019/03/11 23:57:49 by ztisnes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //malloc protection isn't required for the exam

int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}



void		ft_strdel(char **str)
{
	if (str)
	{
		free(*as);
		*as = NULL;
	}
}

static int	len_nbr_base(int value, int base)
{
	int len;

	len = 0;
	while (value)
	{
		len++;
		value /= base;
	}
	return (len);
}

static char	*negative_sign(int n, int base, char *ptr)
{
	if (n < 0 && base == 10)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa_base(int n, int base)
{
	int len;
	long value;
	char *ptr;
	char *b;

	len = len_nbr_base(n, base);
	value = n;
	if (!(b = 
}

/*char	*ft_itoa_base(int value, int base)
{
	char	*s;
	long	n;
	int		sign;
	int		i;

	n = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'A' - 10;
		n /= base;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}

int		main(int ac, char **av)//
{//
	if (ac == 3)//
		printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));//
	return (1);//
}//
*/
