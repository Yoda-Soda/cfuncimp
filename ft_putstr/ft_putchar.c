/**********************************************************
 * File              : ft_putchar.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 14.03.2018
 * Last Modified Date: 14.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/

#include <unistd.h>

void	ft_puthcar(char c)
{
	write(1,&c,1);
}
