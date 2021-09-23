/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lread <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:43:05 by lread             #+#    #+#             */
/*   Updated: 2021/09/22 20:43:05 by lread            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_print	*ft_table_init(void)
{
	t_print	*table;

	table = (t_print *)malloc(sizeof(t_print));
	if (table == NULL)
		return (NULL);
	table->count = 0;
	return (table);
}

int	ft_printf(const char *str, ...)
{
	t_print	*table;
	int		count;

	table = ft_table_init();
	if (table == NULL)
		return (-1);
	va_start(table->args, str);
	while (*str != '\0')
	{
		if (*str != '%')
		{
			ft_putchar_fd(*str, 1);
			table->count += 1;
		}
		else if (*str == '%')
		{
			ft_flags(table, str);
			str++;
		}
		str++;
	}
	va_end(table->args);
	count = table->count;
	free(table);
	return (count);
}
