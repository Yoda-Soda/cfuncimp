/**
 * File              : ft_strcapitalize.c
 * Author            : Jan Claasen <janclaasen@gmail.com>
 * Date              : 21.03.2018
 * Last Modified Date: 21.03.2018
 * Last Modified By  : Jan Claasen <janclaasen@gmail.com>
 */

int ft_special(char *str)
{
	if (!((*str >= 'A') && (*str <= 'Z') && (*str >= 'a') && (*str <= 'z')))
		return 1;
	else
		return 0;
}

char ft_upper(char *str)
{
	char *begin;
	
	begin = str;
	if (ft_special(*str))
			return str;	
	while(*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = (*str - 32);
		}
		str++;
	}
	str = str - (str - begin);
	return str;
}

char ft_lower(char *str)
{
	char *begin;
	
	begin = str;
	if (ft_special(*str) == 1)
			return str;
	while(*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = (*str + 32);
		}
		str++;
	}
	str = str - (str - begin);
	return str;
}

char *ft_strcapitalize(char *str)
{
	char *begin;
	
	begin = str;//marks my beging address
	str++; //prevents the while loop from starting at first char
	while (*str)//loops through the string
	{
		if (*(str - 1) == ' ' && *str == ' ') //checks for space before the current char and the checks if the current char isn't a space
			*str = ft_upper(*str);//changes checked char to uppercase
		else
			*str = ft_lower(*str); //changes all other char to lower
		str++;
	}
	
	str = str - (str - begin);//moves the address back to the begining
	*str = ft_upper(*str); //uppercases the first char
	return str;
}
