/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_memory.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: arazanaj <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/31 14:26:10 by arazanaj     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/31 16:30:14 by arazanaj    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	print_memory(const void *addr, size_t size)
{
	size_t			i;
	size_t			j;
	unsigned char	*ptr;
	char			*str;

	str = "0123456789abcdef";
	ptr = (unsigned char*)addr;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16)
		{
			if (i + j < size)
			{
				write(1, &str[(*(ptr + i + j) / 16)], 1);
				write(1, &str[*(ptr + i + j) % 16], 1);
			}
			else
				write(1, "  ", 2);
			if (j++ % 2)
				write(1, " ", 1);
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(ptr + i + j) > 31 && *(ptr + i + j) < 127)
				write(1, ptr + i + j, 1);
			else
				write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}
