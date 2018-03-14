#include <unistd.h>

void	ft_puthcar(char c)
{
	write(1,&c,1);
}
