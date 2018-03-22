/**
 * File              : main.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 21.03.2018
 * Last Modified Date: 22.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char *str = "sulut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s",str);
//	printf("%s",ft_strcapitalize(str));
	ft_strcapitalize(str);
	return(0);
}
