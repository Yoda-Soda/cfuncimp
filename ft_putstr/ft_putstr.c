/**********************************************************
 * File              : ft_putstr.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 14.03.2018
 * Last Modified Date: 14.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 **********************************************************/
void	ft_putchar(char c);

void 	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putstr(*str);
		str++;
	}
}
