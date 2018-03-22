/**
 * File              : ft_strcapitalize2.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 21.03.2018
 * Last Modified Date: 22.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i;
	char *begin;
	
	i = 1;
	//begin = str;

	if(str[0] >= 'a' && str[0] <= 'z')//makes first char upppercase if required
		str[0] -= 32;
	while(str[i] != '\0')
	{
		if (str[i - 1] == ' ')//checks if first char of word
		{
			if(str[i] >= 'a' && str[i] <= 'z')//makes first char of word uppercase if required
				str[i] -= 32;
			putchar(str[i]);
			i++;//increment because of succesfull change
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		putchar(str[i]);
	}
	//printf("%s",begin);
	return(begin);
}

